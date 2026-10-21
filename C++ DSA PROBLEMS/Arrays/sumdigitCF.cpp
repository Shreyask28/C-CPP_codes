#include <iostream>
#include <string>
using namespace std;

int main()
{

    long long n;
    cin >> n;
    

    string s;
    cin >> s;

    long long sum = 0;

    for (long long i = 0; i < n; i++)
    {
        long long strnum = stoll(s.substr(i, 1));
        long long lastdigit = strnum % 10;

        sum += lastdigit;
        strnum = strnum / 10;
    }
    cout << sum << endl;
}