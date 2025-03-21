class Solution {
public:

    void reverse(vector<int> &arr,int s,int e){
        while(s<e){
            swap(arr[s],arr[e]);
            s++;
            e--;
        }
    }
    void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}
    void rotate(vector<int>& nums, int k) {
            
         

        int n=nums.size();
        k = k % n;
        reverse(nums,0,n-1);
        reverse(nums,0,k-1);
        reverse(nums,k,n-1);

        printArray(nums);
         }
    

    
};