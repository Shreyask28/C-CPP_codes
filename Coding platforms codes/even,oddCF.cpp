#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter the size of array : ";
    cin >> n;

   
    vector<int> arr(n);

    int counteven = 0, countodd = 0;
    int countpositive = 0, countnegative = 0;

    for (int i = 0; i < n; i++) {
        cout<<"enter the element : ";
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            counteven++;
        else
            countodd++;

        if (arr[i] > 0)
            countpositive++;
        else if (arr[i] < 0)
            countnegative++;
    }

    cout << "Even :" <<" "<< counteven << endl;
    cout << "Odd :" <<" "<<countodd << endl;
    cout << "Positive :" <<" "<< countpositive << endl;
    cout << "Negative :" <<" "<< countnegative << endl;

    return 0;
}
