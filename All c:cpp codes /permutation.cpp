#include <iostream>
using namespace std;
int fact(int x){
    int f;
    for(int i=1;i<=x;i++){
        f=f*i;
    }
    return f;
}

int main() {
   int n;
   cout<<"emter number n: ";
    cin>>n;
    int r;
    cout<<"enter number r: ";
    cin>>r;
    int a=fact(n);
    int b=fact(n-r);
    int c=a/b;
    cout<<" the permutation is "<<c;
}


   

 



    

