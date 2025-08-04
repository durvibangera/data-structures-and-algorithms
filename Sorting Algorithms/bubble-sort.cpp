#include <iostream>
using namespace std;

void bubbleSort(int arr[],int n){
    int temp=0;
    for(int i=0;i<=n-1;i++){
        bool isSwap=false;
        for(int j=0;j<=n-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                isSwap=true;
            }
        }
        if(!isSwap) return;
    }
}

int main(){
    int arr[]={5,4,3,2,1};
    int n=5;
    bubbleSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}