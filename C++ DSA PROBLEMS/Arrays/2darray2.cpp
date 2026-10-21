#include <iostream>
using namespace std;

int main(){
    int a[5][4]= {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
    for(int i=1;i<=4;i++){
        for(int j=1;j<=2;j++){
            cout<<a[i][j]<<" ";

        }
        cout<<endl;

    }

    return 0;
}
