#include <iostream>
using namespace std;

int main()
{ 
   int n;
   cout<<"Enter the number of elements:"<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter element "<<endl;
   for (int i=0;i<n;i++)
   {
      
       
       cin>>arr[i];
   }
   for (int i=0;i<n;i++)
   {
       arr[i]=arr[i]*arr[i];
      cout << "Square of element "<<arr[i]<<endl;
   }
   

}




