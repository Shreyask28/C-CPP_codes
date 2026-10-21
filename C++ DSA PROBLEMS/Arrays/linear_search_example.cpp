#include <iostream>
using namespace std;
int linearsearch(int arr[],int target){
    for(int i=0;i<5;i++){
    if (arr[i]==target){
        return i;
    }
    }
    return -1;
}
int main(){
 int arr[]={11,22,33,12,13};
 int target =33;
 cout<<linearsearch(arr,target)<<endl;

}