#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        // Since constraints say 1 <= nums[i] <= 100
        int freq[101] = {0}; 
        int sum = 0;

        // Step 1: Count occurrences
        for (int x : nums) {
            freq[x]++;
        }

        // Step 2: Sum elements that appeared exactly once
        for (int i = 1; i <= 100; i++) {
            if (freq[i] == 1) {
                sum += i;
            }
        }

        return sum;
    }
};