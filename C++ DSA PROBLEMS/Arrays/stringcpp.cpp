#include <iostream>
using namespace std;
int main(){
    char a[20]="Rahul";
    char b[10]="Raj";
    strncpy(a,b,6);
    cout<<a <<" "<< b<<endl;
    
    return 0;

}
