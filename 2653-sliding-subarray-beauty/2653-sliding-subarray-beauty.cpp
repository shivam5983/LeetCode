class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        vector<int> ans(nums.size() - k + 1, 0), counter(50, 0);
        
        // Traverse the nums array with sliding window
        for (int i = 0; i < nums.size(); i++) {
            // If the current number is negative, increment its counter
            if (nums[i] < 0) {
                counter[nums[i] + 50]++;  // Map negative numbers [-50, -1] to [0, 49]
            }
            
            // Once the window size is reached (i >= k-1), calculate the result for the current window
            if (i >= k - 1) {
                int count = 0;
                
                // Find the x-th smallest negative number in the window
                for (int j = 0; j < 50; j++) {
                    count += counter[j];
                    if (count >= x) {
                        ans[i - k + 1] = j - 50;  // Map the index back to the original negative number
                        break;
                    }
                }

                // If less than x negative numbers exist, the result remains 0
                if (count < x) {
                    ans[i - k + 1] = 0;
                }

                // Slide the window by removing the element that is going out of the window
                if (nums[i - k + 1] < 0) {
                    counter[nums[i - k + 1] + 50]--;
                }
            }
        }

        return ans;
    }
};
