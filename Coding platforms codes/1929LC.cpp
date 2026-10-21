#include <iostream>
using namespace std;

int main()
{
    int n1;
    cin>>n1;
    int nums[n1];
    int ans[n1];
    
    for(int i=0;i<n1;i++){
        cin>>nums[i];
    }
   
    for(int i=0;i<n1;i++){
        ans[i]=nums[i];
    }
    for(int i=0;i<2*n1;i++){
        ans[n1+i]=ans[i];
    }
    for(int i=0;i<n1+(2*n1);i++){
        cout<<ans[i]<<" ";
    }


 return 0;
}

