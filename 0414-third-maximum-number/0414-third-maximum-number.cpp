class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int maximum = *max_element(nums.begin(), nums.end());
        int save = maximum;

        for (int i = 0; i < 2; ++i) {
            nums.erase(remove(nums.begin(), nums.end(), maximum), nums.end());
            if (nums.size() == 0) return save;
            maximum = *max_element(nums.begin(), nums.end());
        }

        return maximum;
    }
};