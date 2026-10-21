#include <iostream>
using namespace std;

   int fact(int x){
      int f=1;
      for(int i=1;i<=x;i++){
         f=f*i;
        
      }
        return f;
    }

int ncr(int n, int r){
    int a=fact(n);
    int b=fact(r);
    int c=fact(n-r);
    return a/(b*c);
}
int main(){
    int i,j,n;
    cout<<"enter n:";
    cin>>n;
    for(i=0;i<=n;i++){
        for(j=0;j<=i;j++){
           cout<<ncr(i,j)<<" ";
        }
        cout <<endl;
    }
}
    




   

 



    

