#include <unordered_map>
using namespace std;

// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (head == NULL) {
            return NULL;
        }

        // Map to store old node -> new node
        unordered_map<Node*, Node*> m;

        // Create new head
        Node* newHead = new Node(head->val);
        m[head] = newHead;

        Node* oldTemp = head->next;
        Node* newTemp = newHead;

        // Step 1: Copy next pointers
        while (oldTemp != NULL) {
            Node* copyNode = new Node(oldTemp->val);
            m[oldTemp] = copyNode;
            newTemp->next = copyNode;

            oldTemp = oldTemp->next;
            newTemp = newTemp->next;
        }

        // Step 2: Copy random pointers
        oldTemp = head;
        newTemp = newHead;

        while (oldTemp != NULL) {
            if (oldTemp->random != NULL) {
                newTemp->random = m[oldTemp->random];
            } else {
                newTemp->random = NULL;
            }
            oldTemp = oldTemp->next;
            newTemp = newTemp->next;
        }

        return newHead;
    }
};
