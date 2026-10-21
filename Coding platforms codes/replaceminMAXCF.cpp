#include <iostream>
#include <string>

using namespace std;

int main()
{

    long long n;
    cin>>n;
    long long maxi= 0;
    long long mini=0;
    long long arr[1000];
    for(long long i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]>arr[maxi]){
            maxi=i;
        }
        if(arr[i]<arr[mini]){
            mini=i;
        }
    }
    swap(arr[mini], arr[maxi]);
    for(long long i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}