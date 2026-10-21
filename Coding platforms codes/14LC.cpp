#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
   char s;
    
    char strs[1000];
    for(int i=0;i<n;i++){
        cin >> strs[i];
        if(s==strs[i]){
            s++;
            
        }
        cout<<s<<endl;
    }


    return 0;
}