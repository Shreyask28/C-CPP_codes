#include <iostream>
using namespace std;

long long eq(long long X, long long N)
{
    long long ans=0;
    long long result = 1;
    
    for (int i = 1; i <= N; i++)
    {
        result = result * X;
        if(i%2==0){
            ans=ans+result;
        }
    }
    return ans;
}


int main()
{
    long long x, n;
    cin >> x >> n;
    cout << eq(x, n) << endl;
}
