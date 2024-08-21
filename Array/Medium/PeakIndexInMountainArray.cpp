class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
      int n = arr.size();
      int start = 0;
      int end = (n-1);
      int mid =(start+mid)/2;

      while(start<end){
        if(arr[mid]<arr[mid+1]){
            start = mid+1;
        }
        else if(arr[mid]>arr[mid+1]){
            end = mid;
        }
        mid =(start+end)/2;
      }  
      return start;
    }
};