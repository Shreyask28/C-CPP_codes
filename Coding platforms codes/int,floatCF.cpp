#include <iostream>
using namespace std;
int main(){
  float a;
  cin>>a;
  if(a==int(a)){
    cout<<"int"<<" "<<int(a)<<endl;
  }
  else{
    cout<<"float"<<" "<<int(a)<<" "<<a-int(a)<<endl;
  }
    return 0;
}