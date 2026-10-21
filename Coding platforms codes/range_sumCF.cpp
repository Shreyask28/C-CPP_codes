#include <iostream>
using namespace std;

int main() {
   long long T,start,end;
   
   cin>>T;
   for(int i=0;i<T;i++){
      long long sum=0;
      cin>>start>>end;
      if(start>end){
         swap(start,end);
      }

 
        long long count = end - start + 1;
         sum = (start + end) * count / 2;
        cout<<sum<<endl;
   }
  return 0;
   
}