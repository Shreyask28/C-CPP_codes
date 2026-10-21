#include <iostream>
using namespace std;

int main()
{
    int decimal;
    cin >> decimal;
    int ans = 0;
    int power = 1;

    while (decimal > 0)
    {
        int remainder = decimal % 2;
        decimal = decimal / 2;

        ans = ans + (power * remainder);
        power = power * 10;
    }
    cout << ans << endl;
}