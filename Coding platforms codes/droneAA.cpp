#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
  int a,b;
  cin>>a>>b;
  int t;
  cin>>t;
    int mintime=1e9;
  for(int i=1;i<=t;i++){
    int xi,yi,vi;
    cin>>xi>>yi>>vi;
    int distance;
    distance=sqrt((xi - a)*(xi - a) + (yi - b)*(yi - b));
    
    int time=distance/vi;
  
    if(time<mintime){
      mintime=time;
    }
    else{
        continue;
    }
    
  }
   cout << fixed << setprecision(10) << mintime << endl;
  
    return 0;
}
