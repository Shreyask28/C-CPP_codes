#include <iostream>
using namespace std;

void N(long long n, char c)
{
    for (long long i = 0; i < n; i++)
    {
        cout <<" "<< c;
    }
    cout<<endl;
}

int main()
{
    long long t;
    cin >> t;
    long long n;
    char c;
    
    for (long long i = 0; i < t; i++)
    {
        cin >> n >> c;
        N(n, c);
    }

}
