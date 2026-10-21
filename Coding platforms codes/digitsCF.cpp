#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
   

    int arr[100];   // to store digits
    int rev = 0;

    // extracting digits and storing in array
    while(T--){
        int n;
        cin>>n;


        for(int i = 1; n > 0; i++) {
       
        int lastdigit = n % 10;
        arr[rev] =arr[rev]*10+ lastdigit;
        rev++;
        n = n / 10;
    }

    // printing reversed number from array
    for(int i = 0; i < rev; i++) {
        cout << arr[i];
    }
}

    return 0;
}