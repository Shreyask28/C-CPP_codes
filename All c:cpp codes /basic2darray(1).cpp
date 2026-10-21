#include <iostream>
using namespace std;

int main()
{ 
   int arr[2][3];

   
   for (int i=0;i<2;i++)
    { 
        for (int j=0;j<3;j++)
        {
             cout<<"enter the values for "<<i<<"row and "<<j<<" column"<<endl;  
            cin>>arr[i][j];

        }
        cout<<endl;
    }

  
    for (int j=0;j<3;j++)
    { 
        for (int i=0;i<2;i++)
        {
           
            cout<<arr[i][j]<<" ";

        }
        cout<<endl;
    }
   
}




