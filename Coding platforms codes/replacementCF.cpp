#include <iostream>
using namespace std;
int main()
{
    long long  n;
    cin>>n;
    long long arr[n];
    for(long long  i=0;i<n;i++){
        cin>>arr[i];

    }
  
    for(long long  i=0;i<n;i++){
        if(arr[i]>0){
            arr[i]=1;
        }
        else if(arr[i]==0){
            arr[i]=0;

        }
        else{
            arr[i]=2;
        }
        cout<<arr[i]<<" ";
    }
 return 0;
}

