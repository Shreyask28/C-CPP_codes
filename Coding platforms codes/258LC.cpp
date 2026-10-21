
#include <iostream>
using namespace std;
class Solution
{
public:
    int addDigits(int num)
    {
        
        while (num >= 10)
        {
           int store=0;
            while (num > 0)
            {
                long long lastdigit = num % 10;
                store = store + lastdigit;
                num = num / 10;
            }
            num = store;
        }
        return num;
    }
};

int main()
{
    int n;
    cin >> n;
    Solution obj;
    cout << obj.addDigits(n);

    return 0;
}
