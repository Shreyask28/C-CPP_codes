#include <iostream>
using namespace std;

int main()
{ 
   int a[4][2]={{1,2},{3,4},{5,6},{7,8}};
   cout<<"Enter the elements of the matrix:"<<endl;
   for (int i=0;i<4;i++)
    { 
        for(int j=0;j<2;j++)
        {
            
           cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    int b[4][2]={{1,4},{1,4},{5,6},{9,8}};
    cout<<"Enter the elements of the second matrix:"<<endl;
    for (int i=0;i<4;i++)
    { 
        for(int j=0;j<2;j++)
        {
            
           cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    int c[4][2];
    cout<<"The addition of two matrices is:"<<endl;
    for (int i=0;i<4;i++)
    { 
        for(int j=0;j<2;j++)
        {            
           c[i][j]=a[i][j]+b[i][j];
           cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }



}




