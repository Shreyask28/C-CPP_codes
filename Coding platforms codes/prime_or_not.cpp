#include <iostream>
using namespace std;

int main() {
    int n;
    int i=2;
    bool isprime=true;
   
    cin>>n;
   
    while(i<n){
        if(n%i==0){
            isprime=false;
            break;
         }
        i++;
     
    }
    if(isprime==true){
        cout<<"prime"<<endl;
    }
    else cout<<"not prime";
     
    return 0;
}
//Doubt in this question .