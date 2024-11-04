class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int Start=0;
        int ans=nums[0];
        int end=nums.size()-1;

        while(Start<=end){
            int mid=Start+(end-Start)/2;

            if(nums[mid]>=nums[0]){
                Start=mid+1;
            } 
            else{
                ans=nums[mid];
                end=mid-1;
            }
        }

        return ans;
        
    }
    
};