class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int ans=0,sum=0;
        map<int,int> prefcount;
        prefcount[0]=1;
        for(int num:nums){
            sum+=num;
            if(prefcount.find(sum-goal)!=prefcount.end()){
                ans+=prefcount[sum-goal];
            }
            prefcount[sum]++;
        }
        return ans;
    }
};