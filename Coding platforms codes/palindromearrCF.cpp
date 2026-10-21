#include <iostream>
using namespace std;
int main()
{
    long long a[100005];
    
    long long n;
    cin>>n;
    bool isPalindrome = true;
    
    for( long long i=0;i<n;i++){
        cin>>a[i];
    }
    long long x=n/2;
    for(long long i=0;i<x;i++){
        
        
       if(a[i]!=a[n-1-i]){
        isPalindrome=false;
        break;
       }

    }
     if(isPalindrome){
            cout<<"YES"<<endl;
        }
        
        else{
            cout<<"NO"<<endl;
        }
        

    
 return 0;
}

