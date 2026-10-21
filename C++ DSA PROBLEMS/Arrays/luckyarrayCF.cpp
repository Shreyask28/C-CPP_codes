#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int  main()
{
    long long n;
    cin >> n;
    long long a[1000];
    long long min = INT_MAX;


    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
     
    for (long long i = 0; i < n; i++) {
        if (a[i] % 2 != 0 && a[i] < min) {
            min = a[i];
        }
    }


 

    if (min == INT_MAX) {
        cout << "Unlucky" << endl;
        return 0;
    }
    
    // Count occurrences of the minimum odd number
        long long count = 0;
    for (long long i = 0; i < n; i++) {
        if (a[i] == min) {
            count++;
        }
    }
    if (count % 2 != 0)
    {
        cout << "Lucky";
    }
    else
    {
        cout << "Unlucky";
    }

    return 0;
}