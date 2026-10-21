#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    vector<int> rangeSumQueries(vector<int>& arr, vector<vector<int>>& q) {
        long long n =arr.size();
        vector<int> ans;
        vector<int>pre(n);
        
        pre[0]= arr[0];
        for(long long  i=1;i<n;i++){
            pre[i]=pre[i-1]+arr[i];

        
        }
        for (int i=0;i<q.size();i++){
            int s=q[i][0];
            int e=q[i][1];

            int x = pre[e]-(s>0? pre[s-1]:0);
            ans.push_back(x);
        }

      
        return ans;
    }
};