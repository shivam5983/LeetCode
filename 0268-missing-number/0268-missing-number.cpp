class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n=nums.size();
        int expected_sum= (n*(n+1))/2;
        // cout<<actual_sum;

        int sum=0;

        for(int i=0;i<n;i++){
            sum=sum+nums[i];
            
        }

        int missing=expected_sum-sum;
        return missing;
        
    }
};