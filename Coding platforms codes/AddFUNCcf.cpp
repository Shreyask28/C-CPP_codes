#include <iostream>
using namespace std;
int add(long long a, long long b){
    return a+b;
}

int main() {
    long long a,b;
    cin>>a>>b;
    cout<<add(a,b)<<endl;
    return 0;
   
}