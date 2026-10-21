#include <iostream>
using namespace std;
int main(){
   int arr[3][2];
   for(int i=0;i<3;i++){
    for(int j=0;j<2;j++){
        cin>>arr[i][j];
    }       
}
   int sum=0;
   for(int i=0;i<3;i++){
    for(int j=0;j<2;j++){
        
        sum+=arr[i][j];
        
    }

   }
    cout<<sum<<endl;


    return 0;


}
