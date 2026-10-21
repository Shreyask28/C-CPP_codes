#include <iostream>
using namespace std;

void minmax(int n) {
    if (n <= 0) return;

    int currentn;
    cin >> currentn; // Read the 1st number
    
    int min1 = currentn; // Initialize min with the 1st number
    int max1 = currentn; // Initialize max with the 1st number

    // We already read 1 number, so we loop from 1 to n-1
    for (int i = 1; i < n; i++) {
        cin >> currentn; // READ the next number here!
        
        if (currentn < min1) {
            min1 = currentn;
        }
        if (currentn > max1) {
            max1 = currentn;
        }
    }
    cout << min1 << " " << max1 << endl;
}

int main() {
    int n;
    if (cin >> n) {
        minmax(n);
    }
    return 0;
}