#include <iostream>
using namespace std;

int main()
{
    int binary;
    cin>>binary;
    int ans=0;
    int power=1;
    while(binary>0){
        int rem=binary%10;
        ans=ans+(rem*power);
        binary=binary/10;
        power=power*2;
    }
    cout<<ans<<endl;

}