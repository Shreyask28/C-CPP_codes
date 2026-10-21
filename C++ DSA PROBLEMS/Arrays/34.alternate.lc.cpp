#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> searchRange1(vector<int>& nums, int target) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==target){
             return {i};

                
            }
        }
        
        return {-1};
        
    }
    vector<int> searchRange2(vector<int>& nums, int target) {
        int n=nums.size();
        for(int i=n-1;i>=0;i--){
            if(nums[i]==target){
                return {i};
            }
        }

        
        return {-1};
        
    }

    vector<int> call(vector<int>& nums, int target){
        
        vector<int> result1=searchRange1(nums,target);
        vector<int> result2=searchRange2(nums,target);
        if(result1[0]==-1 && result2[0]==-1){
            return {-1,-1};
        }
        else{
            return {result1[0],result2[0]};
        }
        
    }
};

int main (){
    vector<int>arr1={5,7,7,8,8,10};
    int tar1;
    cin >> tar1;    
    Solution sol;
    vector<int> result = sol.call(arr1, tar1);
    cout << result[0] << " " << result[1] << endl;
}


// for(int i=n-1;i>=0;i--){
//             if(nums[i]==target){
//                 return {i};
//             }
//         }