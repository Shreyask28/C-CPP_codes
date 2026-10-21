#include <iostream>
using namespace std;
int main()
{
    int n,ld,mult;
    
    cout<<"enter the number"<<endl;
    cin>>n;
    mult=1;
   while(n!=0)
   { 
   
    n=n/10;
    ld=n%10;
      mult=mult*ld;
   
    
}
cout<<"the multiplication:" <<mult;
} 

