#include <iostream>
using namespace std;

int main() {
    long long T;
    cin >> T;
    
    for(int i=1;i<=T;i++){
        long long n;
        cin>>n;
        long long fact=1;
        for(int j=1;j<=n;j++){
            fact=fact*j;
        }
        cout<<fact<<endl;
        
    }
    return 0;
}