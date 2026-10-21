#include <iostream>
using namespace std;

int main()
{ 
   int arr[]={2,4,9,7,92,5,3};
   
   for(int i=0;i<5;i++)
   {
    if (i%2!=0) 
    {
        cout<<arr[i]*2<<endl;
    }
    else {
        cout<<arr[i]+10<<endl;
    }
   }
}




