#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long N, M;

    while (cin >> N >> M)
    {

        if (N <= 0 || M <= 0)
        {
            return 0;
        }
        long long sum = 0, j, start, end;
        start = min(N, M);
        end = max(N, M);
        for (j = start; j <= end; j++)
        {
            sum = sum + j;
            cout << j << " ";
        }
        cout << "sum =" << sum << endl;
    }
}
