#include <iostream>


using namespace std;

int main(){
   int  nums[5]={11,22,33,44,44};//.........

   int smallest=INT_MAX;
   
   for(int i=0;i<5;i++){
    if(nums[i]<smallest){ 
        smallest=nums[i];
       
        
        
    }
}
    int biggest=INT_MIN;
    
    for(int i=0;i<5;i++){
    if(nums[i]>biggest){ 
       biggest=nums[i];
    
    }

   }
  cout << "Before swap:" << endl;
    cout << "Smallest = " << smallest << endl;
    cout << "Biggest = " << biggest << endl;

    
    swap(smallest, biggest);

    cout << "After swap:" << endl;
    cout << "Smallest = " << smallest << endl;
    cout << "Biggest = " << biggest << endl;
   
   



}
