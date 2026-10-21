#include <iostream>
using namespace std;


    void reverse(string &a){
    
    int n=a.size();
    int start=0;
    int end=n-1;
    while(start<end){
        swap(a[start], a[end]); 
        start++;
        end--;
    }
    cout<<a;
    
}


int main(){
    string a="Hello";
    reverse(a);
    cout<<a;
    return 0;
}