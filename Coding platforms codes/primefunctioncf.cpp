#include <iostream>
using namespace std;
int prime(long long n){
    if(n<=1){
        return 0;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return n;
  
}

int main() {
    long long T;
    cin>>T;
    for(int i=0;i<T;i++){
        long long a;
        cin>>a;
        if(prime(a)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
   
}