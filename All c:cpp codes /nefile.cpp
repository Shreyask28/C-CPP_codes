# include <iostream>
using namespace std;
int main( )
{
   int i,j,n,a;
   
//    printf("Enter a positive integer: ");
//    scanf("%d",&n);
    cout<<"Enter a positive integer: ";
    cin>>n; 
   
   for (i=1;i<=n;i++)
   {
    for(j=1;j<=i;j++)
    {
        if((i+j)%2==0)
        
            cout<<"1 "<<"";
             
        else
        
            cout<<"0 "<<"";
       
     }
     cout<<endl;
   }
}
 