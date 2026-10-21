#include <iostream>
using namespace std;

int main() {
int n;
cin>> n;
long long a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int count=0;
    
for(int i=0;i<n;i++){
int check=a[i]%2==0;
if(check){
    

    count++;

}
else {
    cout<<0<<" ";
}
cout<<count<<" ";

}
        
return 0;
}