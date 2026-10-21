#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int start =0;
        int end=n-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(nums[mid]==target){
                return {mid,mid};
            }else if(nums[mid]<target){
                start=mid+1;
            }else{
                end=mid-1;  
        }
         while(start<=end){
            int mid=(start+end)/2;
            if(nums[mid]==target){
                return {mid,mid};
            }else if(nums[mid]<target){
                start=mid+1;
            }else{
                end=mid-=1;  
        }
        return {-1,-1};     
        
        
    }
}
};
int main (){
    vector<int>arr1={5,7,7,8,8,10};
    int tar1;
    cin >> tar1;    
    Solution sol;
    vector<int> result = sol.searchRange(arr1, tar1);
    cout << result[0] << " " << result[1] << endl;
}
