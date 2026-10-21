#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int maxi = max({a, b, c});
    int mini = min({a, b, c});
    int rem = a + b + c - mini - maxi;

    // Sorted order
    cout << mini << "\n";
    cout << rem << "\n";
    cout << maxi << "\n";

    // Blank line
    cout << "\n";

    // Original order
    cout << a << "\n";
    cout << b << "\n";
    cout << c << "\n";

    return 0;
}