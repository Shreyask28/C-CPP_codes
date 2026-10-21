#include <iostream>
using namespace std;

int main() {
   long long  n,r,original;
   r=0;
   
    cin>>n;
    original=n;
    
    while(n!=0){
        long long lastdigit=n%10;
        r=r*10;
        r=r+lastdigit;
        n=n/10;
    }
    cout<<r<<endl;
    if(original == r){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}