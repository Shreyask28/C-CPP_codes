#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

   int nums1[n];
   int nums2[n];
   for(int i=0;i<n;i++){
    cin>>nums1[i];
    cin>>nums2[i];
   }

   for(int i=0;i<n;i++){
    int val1=nums1[i];
    int val2=nums2[i];
    int digit1=val1%10;
    int digit2=val2%10;
    if(digit1==digit2){
        cout<<val1<<" "<<val2<<endl;
   }
   val1/=10;
   val2/=10;

    

}
return 0;
}