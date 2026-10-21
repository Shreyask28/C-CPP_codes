#include <iostream>
#include <climits>
using namespace std;


class Solution {
public:
    int reverse(int x) {
        int reverse1 = 0;
        int lastdigit;

        while (x != 0) {   // changed from x > 0
            lastdigit = x % 10;

            // overflow check (added)
            if (reverse1 > INT_MAX / 10 || 
               (reverse1 == INT_MAX / 10 && lastdigit > 7)) return 0;

            if (reverse1 < INT_MIN / 10 || 
               (reverse1 == INT_MIN / 10 && lastdigit < -8)) return 0;

            reverse1 = reverse1 * 10 + lastdigit;
            x = x / 10;
        }

        return reverse1;   // removed wrong string logic
    }
};

int main() {
    int n;
    cin >> n;

    Solution obj;
    cout << obj.reverse(n);

    return 0;
}