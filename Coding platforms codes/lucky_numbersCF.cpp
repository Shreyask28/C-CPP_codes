#include <iostream>
using namespace std;

int main()
{
    long long A, B;
    cin >> A >> B;
    bool foundAny = false; // Initialize to false

    for (int i = A; i <= B; i++)
    {
        bool isLucky = true;
        long long temp = i;
        
        // Digit check loop
        while (temp > 0)
        {
            long long lastdigit = temp % 10;
            if (4 != lastdigit && 7 != lastdigit)
            {
                isLucky = false;
                break;
            }
            temp = temp / 10;
        }
        
        // If it passed the check, print it
        if (isLucky)
        {
            cout << i << " ";
            foundAny = true; // We found at least one!
        }
    }

    // Only print -1 if the loop finished and we never found a lucky number
    if (!foundAny)
    {
        cout << -1;
    }
    
    return 0;
}