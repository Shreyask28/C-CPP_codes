#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    bool found =false;
    for(int i =1; i<=n; i++){
        if(i%2==0){
            cout<<i<<endl;
            found=true;
        }
       if(!found){
            cout<<"-1"<<endl;
        }
    }

    return 0;
}
