class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int res=0;
        for(int i : nums){
            res^=i;
        }
        return res;
        
    }
};