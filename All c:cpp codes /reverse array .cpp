#include <iostream>
using namespace std;

void reverse(int a[], int n) {
    int i, t;
    for (i = 0; i < n / 2; i++) {
        t = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = t;
    }
}

int main() {
    
   int i,n;
   cout<<"Enter how many elements you want in array:";
    cin>>n;
    int a[n];
    cout <<"Enter "<<n<<" elements:"<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    reverse(a, n);
    printf("Reversed array is:\n");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", a[i]);
    }   
    printf("\n");
    return 0;
}