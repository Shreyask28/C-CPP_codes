#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& arr, int target) {
        int n=arr.size();
        int start=0;
        int end =n-1;
        while(start<=end){
            int mid=(start+end)/2;
            
            if(arr[mid]==target){
                return mid;
            }
            else if(arr[mid]>target){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
            

        }
        return -1;
        

  
    }
};

int main(){
    vector<int> arr1={-1,0,3,5,9,12};
    int target;
    cin>>target;
    cout<<search(arr1,target);


}

