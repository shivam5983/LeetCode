class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
     int l = 0;
     int r = k-1;
     int sum = 0;
     int count = 0;
     for(int i = 0; i <= r; i++){
        sum += arr[i];
     } 
     if(sum / k >= threshold){
        count++;
     } 
     while(r < arr.size()-1){
        sum = sum - arr[l];
        l++;
        r++;
        sum = sum + arr[r];
        if(sum / k >= threshold){
            count--;
        }
     }
     return count;
    }
};