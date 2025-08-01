class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,-1);
        stack<int> stack;

        for(int i = 2*n-1;i>=0;i--){
            while(!stack.empty() && nums[i%n]>=nums[stack.top()]){
                stack.pop();
            }
            ans[i%n] = stack.empty() ? -1 : nums[stack.top()];
            stack.push(i%n);
        }
        return ans;
    }
};