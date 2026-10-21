#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string func;
    double degree;
    double PI = 3.14159;

    cout << "Function (sin/cos/tan/cot/csc/sec) and Degree: ";
    cin >> func >> degree;

   
    double rad = degree * (PI / 180.0);

    if (func == "sin") cout << sin(rad);
    if (func == "cos") cout << cos(rad);
    if (func == "tan") cout << tan(rad);
    if (func == "cot") cout << 1 / tan(rad);
    if (func == "csc") cout << 1 / sin(rad);
    if (func == "sec") cout << 1 / cos(rad);
    if (func!= "sin" && func != "cos" && func != "tan" && func != "cot" && func != "csc" && func != "sec") {
        cout << "Invalid function";
    }



    return 0;
}