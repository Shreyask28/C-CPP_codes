#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while(T--) {
        long long N;
        cin >> N;

        // Special case when N is 0
        if (N == 0) {
            cout << "0\n";
            continue;
        }

        // Extracting digits from right to left
        while (N > 0) {
            int digit = N % 10;
            cout <<" "<<digit;
            N /= 10;
        }

        cout << "\n";
    }

    return 0;
}