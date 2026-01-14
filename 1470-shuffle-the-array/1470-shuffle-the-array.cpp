class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> res;
        int j = n;

        for(int i = 0; i < n; i++) {
            res.push_back(nums[i]);   // x_i
            res.push_back(nums[j]);   // y_i
            j++;
        }

        return res;
    }
};
