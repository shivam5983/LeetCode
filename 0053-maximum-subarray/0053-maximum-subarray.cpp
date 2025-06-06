//kadene's algorithm +
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n= nums.size();
        int current_sum=nums[0];
        int max_sum = nums[0];

        for(int i=1;i<n;i++){
            current_sum= max(nums[i] , current_sum+nums[i]);
          max_sum=max(current_sum , max_sum);
        }

        return max_sum;
        
    }
};