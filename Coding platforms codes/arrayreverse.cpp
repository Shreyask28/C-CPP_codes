#include <iostream>
using namespace std;
int main()
{
    long long a[1000];
    long long n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        long long b[1000];
        b[i]=a[n-1-i];
        cout<<b[i]<<" ";
    }
    
 return 0;
}

