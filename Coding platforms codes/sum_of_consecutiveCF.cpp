#include <iostream>
using namespace std;

int main() {
  long long T;
  cin>>T;
  for(int i=0;i<T;i++){
    long long X,Y,start,end,sum=0;
    cin>>X>>Y;
    start=min(X,Y);
    end=max(X,Y);
    for(int j=start+1;j<=end-1;j++){
        if(j%2!=0){
            sum=sum+j;
        }
    }
    cout<<sum<<endl;

  }

   
}