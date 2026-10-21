#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "My name is Shreyas";
   
    for(int i = 1; i < s.size(); i++) {
        // Check if the INDEX i is even
        if(i % 2 == 0) {
            s[i] = 'a'; // Update the character at that position
        }
        
    }

    cout << s << endl; // Output: aynameaiasahreyas
   
    return 0;
}