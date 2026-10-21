#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool isPrime =true;
 
    int count = 0;
    for (int i = 2; i <= n; i++)
    {
        if (i % n == 0)
        {
            isPrime = false;
        }
    
    if (isPrime)
    {
        count++;
        cout<<count;
    }
}
}
