#include <iostream>
#include <climits>
using namespace std;

int solve() {
   long long n;
    cin >> n;
    long long a[1000];
    for(long long i=0;i<n;i++){
        cin>>a[i];
    }
    long long min=LLONG_MAX;
    for(long long i=0;i<n-1;i++){
        for(long long j=i+1;j<n;j++){
            long long curr=a[i]+a[j]+j-i;
            if(curr<min){
                min=curr;
            
            }
        }
    }
    return min;
}
int main() {
    long long t;
    cin >> t; 
    while (t--) {
        cout << solve() << endl;
    }
    return 0;
}



