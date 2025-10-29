#include <iostream>
using namespace std;

/**
 * Definition for singly-linked list.
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
                return true; // Cycle detected
        }
        return false; // No cycle
    }
};

// Helper function to print list safely (stops after few nodes to avoid infinite loop)
void printList(ListNode* head) {
    ListNode* temp = head;
    int count = 0;
    while (temp != NULL && count < 10) { // print limited nodes to avoid infinite loop
        cout << temp->val << " -> ";
        temp = temp->next;
        count++;
    }
    if (temp != NULL)
        cout << "... (cycle detected while printing)";
    else
        cout << "NULL";
    cout << endl;
}

int main() {
    // Example 1: Create a linked list without a cycle
    ListNode* head1 = new ListNode(1);
    head1->next = new ListNode(2);
    head1->next->next = new ListNode(3);
    head1->next->next->next = new ListNode(4);

    cout << "List 1: ";
    printList(head1);

    Solution sol;
    cout << "Has cycle? " << (sol.hasCycle(head1) ? "Yes" : "No") << endl;

    // Example 2: Create a linked list with a cycle
    ListNode* head2 = new ListNode(1);
    head2->next = new ListNode(2);
    head2->next->next = new ListNode(3);
    head2->next->next->next = new ListNode(4);
    head2->next->next->next->next = head2->next; // create cycle (4 -> 2)

    cout << "\nList 2 (with cycle): ";
    printList(head2);

    cout << "Has cycle? " << (sol.hasCycle(head2) ? "Yes" : "No") << endl;

    // Memory cleanup (not freeing cyclic list to avoid infinite loop)
    delete head1->next->next->next;
    delete head1->next->next;
    delete head1->next;
    delete head1;

    return 0;
}
