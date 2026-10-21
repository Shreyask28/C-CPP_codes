#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        int ans=0;
        int curr =0;
        for(int i=0;i<n;i++){
            curr+=gain[i];
            ans=max(ans,curr);
        }
        return ans;

    }
};
    

    int main(){
        vector<int> arr1 = {4,5,6,7,0,1,2};
        int tar1;
        cin >> tar1;

        Solution sol;
        cout << sol.largestAltitude(arr1);

        return 0;
    }