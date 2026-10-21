#include <vector>
#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int min = 1000000;
    int a[1000];
    int position =0;
    for( int i=0;i<n;i++){
        cin>>a[i];
        if(a[i] < min){
            min = a[i];
            position = i+1;
        }
    }
    cout<<min<<" "<<position<<endl;
    return 0;
}
    

