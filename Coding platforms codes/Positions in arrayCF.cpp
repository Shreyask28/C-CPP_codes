#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long a[1000];  

    for(long long i = 0; i < n; i++){
        cin >> a[i];

        if(a[i] <= 10){
            cout << "A[" << i << "] = " << a[i] << endl;
        }
    }

    return 0;
}