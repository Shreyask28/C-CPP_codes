#include <iostream>

using namespace std;
class Solution {
  public:
    int firstocc(vector<int>& arr, int target) {
        int start=0;
        int end=arr.size()-1;
        int result=-1;
        
        while(start<=end){
            
            int mid =(start + end)/2;
            if(arr[mid] ==target){
                result = mid;
                end = mid - 1;
            }
            else if(arr[mid]<target){
                start = mid +1;
                

            }
            else {
                end =mid-1;
            }
           
        }
        return result;
       
    }


    int lastocc(vector<int>& arr, int target) {
        int start=0;
        int end=arr.size()-1;
        int result=-1;
        
        while(start<=end){
            
            int mid =(start + end)/2;
            if(arr[mid] ==target){
                result = mid;
                start = mid + 1;
            }
            else if(arr[mid]<target){
                start = mid +1;

            }
            else {
                end =mid-1;
            }
           
        }
        return result;
       
    }

    int countFreq(vector<int>& arr, int target){
        
        int first =firstocc(arr,target);
         if(first == -1)
          return 0;
        int last =lastocc(arr,target);

        return last-first+1;
      
    }
};
     






int main(){
    vector<int> arr1 = {1, 1 ,2, 2 ,2, 2 ,3};
    int tar1;
    cin >> tar1;

    Solution sol;
    cout << sol.countFreq(arr1, tar1);

    return 0;
}
