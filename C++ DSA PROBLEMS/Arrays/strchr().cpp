#include <iostream>
using namespace std;
int main(){
   char s[20]="Rahul Rohan";
   char *ptr=strchr(s,'z');
   if(ptr!=NULL){
       cout<<ptr-s<<endl;
   }
   else{
       cout<<"Not found"<<endl;
   }


    return 0;

}
