#include <iostream>
#include <algorithm>
using namespace std;

void print(int n){
    if(n==0){
        return;
    }
    if(n>=1){
    
        print(n-1);
        cout<<n<<" ";
    
        return;
    }
        
    
}

int main()
{
    int n;
    cin>>n;
    print(n);

    return 0;
}
