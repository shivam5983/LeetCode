class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size(), 0);
        int num_zeroes = 0, p{1}, ind;
        for(int i{}; i < nums.size(); ++i)
        {
            if(nums[i] == 0) {num_zeroes++;ind = i;} 
            if(nums[i] != 0) p*= nums[i];
        }
        if(num_zeroes == 0)
        {
            for(int i{}; i < nums.size(); ++i)
                res[i] = (p/nums[i]);
            
        }
        else if(num_zeroes == 1)
        {
            res[ind] = p;
            
        }
        return res;
    }
};