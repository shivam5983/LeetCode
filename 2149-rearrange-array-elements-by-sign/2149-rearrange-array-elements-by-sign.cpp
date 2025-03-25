class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();

        vector<int> positives,negatives;

        for(int i=0;i<n;i++){
            if(nums[i]>0){
                positives.push_back(nums[i]);
            }
            else{
                negatives.push_back(nums[i]);
            }
        }

          vector<int> result(nums.size());
    int posIdx = 0, negIdx = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (i % 2 == 0) result[i] = positives[posIdx++];
        else result[i] = negatives[negIdx++];
    }
    
    return result;
    }
};