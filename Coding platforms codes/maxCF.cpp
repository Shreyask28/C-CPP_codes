#include <iostream>
using namespace std;

int main() {
    long long x,n,max;
    max=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        if(x>max){
            max=x;
        } 
    }
    cout<<max<<endl;
    return 0;
}


