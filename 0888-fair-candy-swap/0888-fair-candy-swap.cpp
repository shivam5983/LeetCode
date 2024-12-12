
class Solution {
public:
    vector<int> fairCandySwap(vector<int>& a, vector<int>& b) {
        int sum1=0;
        int sum2=0;
        for(int i=0;i<a.size();i++)
        sum1+=a[i];
        for(int i=0;i<b.size();i++)
        sum2+=b[i];
        int res=(sum1-sum2)/2;
        for(int i=0;i<a.size();i++)
        {
            for(int j=0;j<b.size();j++)
            {
                if(a[i]-b[j]==res)
                {
                    return {a[i],b[j]};
                }
            }
        }
        return {};
    }
};