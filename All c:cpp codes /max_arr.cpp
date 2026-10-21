#include <iostream>
using namespace std;

int main()
{ 
    int mx;
    int arr[]={2,3,4,5,7};
    mx=arr[0];
    for(int i=0;i<5;i++)
    {
       if(arr[i]>mx) mx=arr[i];
    }  
cout<<mx<<endl;
}




