#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    
    int a[] = {1, 2, 3, 4};
    int n=sizeof(a)/4;
    int i=0;
    
    int j=n-1;
    for(int i=0;i<n;i++){
        swap(a[i],a[j]);
        i++;
        j--;
        cout<<a[i]<<" ";
    }
    return 0;
}
