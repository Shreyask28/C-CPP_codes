#include <iostream>
using namespace std;



class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        
        for(int i=0;i<n;i++){
            
            if(nums[i]>n/2){
                count++;
                if(count>n/2){
                    return nums[i];
                }
            }
            else{
                count=0;
            }

        }

     

        return -1;
    }
};





int main() {
    vector<int> nums = {2,2,1,1,1,2,2};
    Solution sol;
    int result = sol.majorityElement(nums);
    cout << "Majority Element: " << result << endl;

}
