class Solution {
public:
    int maximumCount(vector<int>& nums) {

         int n = nums.size();

        // Find the first non-negative index (i.e., count of negative numbers)
        int left = 0, right = n - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] < 0) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        int negCount = left; // count of negative numbers

        // Find the first positive index (i.e., count of zeros + negative numbers)
        left = 0, right = n - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] <= 0) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        int posCount = n - left; // count of positive numbers

        return max(negCount, posCount);

        
    }
};