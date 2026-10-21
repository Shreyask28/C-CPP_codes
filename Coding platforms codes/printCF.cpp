#include <iostream>
using namespace std;
int print(long long n){
    for(int i=1;i<=n-1;i++){
        cout<<i<<" ";
    }
    cout<<n<<endl;
     return n;
}

int main() {
    long long a;
    cin>>a;
    print(a);
   
  return 0;
   
}