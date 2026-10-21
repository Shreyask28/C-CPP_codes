#include <iostream>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            nums[i]=nums[i+1];

        }
        nums.pop_back();
        nums.push_back(0);
        return n;
    
        
    }
};