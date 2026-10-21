#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long sum = 0;
    // We start at 1 and go all the way up to AND including n
    for(int i = 1; i <= n; i++) {
        sum = sum + i;
    }
    // Print only the final result after the loop finishes
    cout << sum << endl;
    return 0;
}