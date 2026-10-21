#include <iostream>
#include <climits>
using namespace std;


class Solution {
public:
    int power(int base ,int exp) {
        int res=1;
        for(int i=1;i<=exp;i++){
            res=res*base;

            
        }
        if(base==2)
        
        
    }
};

int main() {
    int a,b;
    cin>>a>>b;
    Solution obj;
    cout<<obj.power(a,b);

    return 0;
}

