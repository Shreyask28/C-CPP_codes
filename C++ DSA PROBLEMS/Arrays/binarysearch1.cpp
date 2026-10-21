#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size();
        while(start<=end){
            int mid =(start + end)/2;
            if(target>mid){
                end = mid -1;

            }
            else if(target < mid){
                start =mid+1;
            }
            else return mid;
        }
        return -1;
    }
};



int main(){
    vector<int> arr1 = {-1,0,3,5,9,12};
    int tar1;
    cin >> tar1;

    Solution sol;
    cout << sol.search(arr1, tar1);

    return 0;
}