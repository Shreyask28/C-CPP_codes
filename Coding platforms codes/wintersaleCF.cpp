#include <iostream>
using namespace std;

int main() {
    double SP,discount;
    double MP;
    cin>>discount>>SP;
    MP=(SP*100)/(100-discount);
    cout<<MP<<endl;
    

    return 0;
}