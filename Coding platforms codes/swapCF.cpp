#include <iostream>
using namespace std;
void swap(long long a, long long b)
{
    long long temp = a;
    a = b;
    b = temp;
    cout << a << " " << b << endl;
}

int main()
{
    long long a, b;
    cin >> a >> b;
    swap(a, b);
    return 0;
}