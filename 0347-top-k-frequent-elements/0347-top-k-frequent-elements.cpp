class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> dict;
        for(auto num:nums){
            dict[num]++;
        }
        vector<vector<int>> bucket(nums.size()+1);
        for(auto num:dict){
            bucket[num.second].push_back(num.first);
        }
        vector<int> result;
        for(int i=bucket.size()-1;i>=0 && result.size()<k;i--){
            for(auto x:bucket[i]){
                result.push_back(x);
                if(result.size()==k) break;
            }
        }
        return result;
    }
};