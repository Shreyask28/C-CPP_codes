#include <iostream>
using namespace std;
int main()
{

        int ans = 0;
        int pow=1;
        int decNum;
       cin>>decNum;
        while(decNum>0 ){
            int rem= decNum%2;
            decNum =decNum/2;
            ans+=rem*pow;
            pow= pow*10;

        }
      cout<<ans<<endl;
    }