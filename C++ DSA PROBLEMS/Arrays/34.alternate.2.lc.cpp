#include <iostream>
using namespace std;

class Solution {
    public:


    vector<int> searcRange1(vector<int>& nums, int target){
        int n=nums.size();
        int start=0;
        int end=n-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(nums[mid]==target){
                return {mid};
            }
            else if(nums[mid]<target){
                start=mid-1;
            }
            else{
                end=mid+1;
            }
        }
        return {-1, -1};

    }

    //second function to find the last occurrence of the target
     vector<int> searcRange2(vector<int>& nums, int target){
        int n=nums.size();
        int start=0;
        int end=n-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(nums[mid]==target){
                return {mid};
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return {-1, -1};

    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int first=searcRange1(nums,target)[0];
        int last=searcRange2(nums,target)[0];
        return {first,last};
        
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