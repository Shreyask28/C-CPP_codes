#include <iostream>
#include <cctype>
#include <vector>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        string result;
      

    for(int i = 0; i < s.length(); i++) {
        if((s[i] >= 'A' && s[i] <= 'Z') ||
           (s[i] >= 'a' && s[i] <= 'z') ||
           (s[i] >= '0' && s[i] <= '9')) {
            
            result += static_cast<char>(tolower(static_cast<unsigned char>(s[i])));
        }
    }


    int start = 0;
    int end = result.length() - 1;

    while (start < end) {
        if (result[start] != result[end]) {
            return false;
        }

        start++;
        end--;
    }

    return true;
    
    }
};
int main() {
    Solution solution;
    string input = "A man, a plan, a canal: Panama";
    bool isPalin = solution.isPalindrome(input);  
    cout << isPalin << endl;
}     


