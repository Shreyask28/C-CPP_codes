#include <iostream>
using namespace std;
int pow(int a, int b)
{ 
    if (b==0){
        return 1;
    }
    else{
        return a*pow(a,b-1);
    }
}
int main()
{ 
    int a;
    cout<<"enter the number"<<endl;
    cin>>a;
    int b;
    cout<<"enter the power"<<endl;
    cin>>b;
    cout<<"the result is:"<<pow(a,b);
   
} 

