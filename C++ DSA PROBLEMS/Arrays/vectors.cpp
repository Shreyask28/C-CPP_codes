#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int start=0;
        int end=n-1;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                swap(nums[start],nums[i]);
                start++;
            }
            

        }
    }
};

int main() {
    Solution solution;
    vector<int> nums = {0, 1, 0, 3, 12};
    solution.moveZeroes(nums);
    
    for(int num : nums) {
        cout << num << " ";
    }
    
    return 0;
}