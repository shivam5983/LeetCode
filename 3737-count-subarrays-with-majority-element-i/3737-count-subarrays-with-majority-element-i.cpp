class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int n= nums.size();
        int a=0;

        for(int i=0;i<n;i++){
            int count=0, total=0;

            for(int j=i;j<n;j++){
                if(nums[j]==target){
                    count++;
                }
                total++;

                if(count *2> total){
                    a++;
                }
            }
        }
        return a;
        
    }
};