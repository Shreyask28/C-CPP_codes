#include <iostream>
using namespace std;

void sort(int arr[], int n){
    int start=0;
    int end = n - 1;

    while(start<end){
        if(arr[start]>arr[end]){
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
        else if(arr[start]<arr[end]){
            start++;
        }
        else{
            end--;
        }

    }
}

int main(){
    int arr[]={5, 2, 9, 1, 5, 6};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

    
