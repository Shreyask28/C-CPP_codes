#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[1000];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Bubble sort: n-1 passes
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }

    // Print after sorting is complete
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}