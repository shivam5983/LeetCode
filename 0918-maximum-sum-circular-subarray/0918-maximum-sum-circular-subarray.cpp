class Solution {
public:
    // yaha par maximumSubarraySum, minSubarraySum , total sum nikalna hai
    // return kr dena hai
    int maxSubarraySumCircular(vector<int>& nums) {
        int totalSum = 0;
        int maxSum = nums[0], currMax = nums[0];
        int minSum = nums[0], currMin = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            currMax = max(nums[i], currMax + nums[i]);
            maxSum = max(maxSum, currMax);

            currMin = min(nums[i], currMin + nums[i]);
            minSum = min(minSum, currMin);

            totalSum += nums[i];
        }
        totalSum += nums[0]; // because we started from index 1 above

        if (maxSum < 0) {
            return maxSum; // all elements are negative
        }

        return max(maxSum, totalSum - minSum);
    }
};
