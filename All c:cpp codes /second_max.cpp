#include <iostream>
using namespace std;

int main()
{ 
   int mx=0;
   int smax=0;
    int arr[]={2,4,9,7,92,5,3};
    
    for(int i=0;i<5;i++)
    {
        mx=max(mx,arr[i]);
       
    }
    for(int i=0;i<5;i++)
    {
        if(arr[i]!=mx){
              smax=max(smax,arr[i]);
        }
       
       
    }
        cout<<smax<<endl;
}
