#include <iostream>
using namespace std;

class Solution {
public:
    int minDays(vector<int>& arr,int day, int m, int k) {
        
        int n;

        if(m*k>arr[n]){
            return -1;

        }
        else{
            int count=0;
            int booq=0;
            
            for(int i=0;i<n;i++){
                if(arr[i]<=day){
                    count++;

                }
                else{
                    booq=(count/k)+booq;
                    count =0;
                }
                booq=(count/k)+booq;

            }
            if(booq>=m){
                return true;
            }
            else return false;
        }

        
    }
    for(int i=0;i<n;i++){
        if(day==true){
            return day;
        }

    }
};

int main(){
    
}