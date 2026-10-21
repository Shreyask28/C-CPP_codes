#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;                // number of test cases

    while (T--) {
        int N;
        cin >> N;
        
        long long fact = 1; // factorial result
        
        // compute N!
        for (int i = 1; i <= N; i++) {
            fact *= i;
        }
        
        cout << fact << "\n";
    }
    
    return 0;
}
//Doubt in this question .