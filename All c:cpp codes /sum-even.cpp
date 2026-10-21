#include <iostream>
using namespace std;

int main()
{ 
    int sumeven=0;
    int sumodd=0;
    int diff;
    int arr[]={2,4,9,7,92,5,3};
    
    for(int i=0;i<5;i++)
    {
     if (arr[i]%2==0)
     { 
        sumeven+=arr[i];
        
     }
     else{
        sumodd+=arr[i];
       
     }
    
    }
     cout<<" sum even"<<" : "<<sumeven<<endl;
     cout<<" sum odd"<<" : "<<sumodd<<endl;
     diff=sumeven-sumodd;
     cout<<" difference "<<" : "<<diff<<endl;

    

}
