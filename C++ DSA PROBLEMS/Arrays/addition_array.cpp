#include <iostream>
using namespace std;
int addition(int sum,int arr[]){
    for(int i=0;i<5;i++){
        sum=sum+arr[i];
       
    }
     return sum;

}


int main(){
    int sum=0;
    int arr[5]={1,2,3,4,5};
  

    cout<<"addition of numbers = "<<endl;
    cout<<addition(sum, arr);
    return 0;
}