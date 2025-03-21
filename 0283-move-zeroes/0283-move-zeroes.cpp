class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int n=arr.size();
        int j=0;
        for(int i=0;i<n;i++){
            if(arr[i]!=0){
                swap(arr[i],arr[j]);
                j++;}
        }
        printArray(arr);
    }
        void printArray(vector<int> nums){
            int n=nums.size();
            for(int i:nums){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        
    
};