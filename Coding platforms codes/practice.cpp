#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int steps=0;

    while (n>0) { 
        steps++;
        n=n/2;
       

    }
    cout<<steps<<endl;

    return 0;
}