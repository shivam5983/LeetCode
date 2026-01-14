class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n= nums.size();
        int prev_count=0;
        int present_count = 0;

        for(int i=0;i<n;i++){
            if(nums[i] == 1) {
            prev_count++;
            // present_count=prev_count;
            }

            else{
            prev_count= 0;}
        
            present_count = max(present_count,prev_count);


            
        }
        return present_count;
    }
};