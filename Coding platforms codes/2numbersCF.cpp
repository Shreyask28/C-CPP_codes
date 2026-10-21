#include <iostream>
using namespace std;

int main() {
    long long A, B;
    cin >> A >> B;
    
    double div = (double) A / B;
    double s=A/B;

    int floor_val = A / B;              // floor
    int ceil_val = s+1;           // ceil
    int round_val = div + 0.5;          // round

    cout << "floor " << A << " / " << B << " = " << floor_val << endl;
    cout << "ceil " << A << " / " << B << " = " << ceil_val << endl;
    cout << "round " << A << " / " << B << " = " << round_val << endl;

    return 0;
}
//     ⣤⣄⣴⣶⣿⣿⣶⣶⣦⣤⣤⣤⣶⣶⣶⣶⣶⣶⣶⣶⣾⣿⣿⣶⣀⣶⣆⣶⣦
//   ⠉⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿:
//  ⢀⣀⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇
//. ⠈⠛⠛⢿⣿⣿⣿⣿⣿⠛⡟⠛⢿⡿⠛⠛⠛⠛⠛⠋          
//.   ⢀⣿⣿⣿⣿⣿⣧⣀⣀⣀⡼                 
//.   ⣼⣿⣿⣿⣿⣿⠋⠉⠉⠁                  
//.  ⢰⣿⣿⣿⣿⣿⡏                      
//. ⢀⣿⣿⣿⣿⣿⣿⠁                      
//. ⣼⣿⣿⣿⣿⣿⡇                       
//  ⠉⠙⠛⠿⠿⣿⠇


