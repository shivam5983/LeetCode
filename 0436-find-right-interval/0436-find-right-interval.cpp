class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        int n=intervals.size();
        vector<pair<int,int>>a(n);
        map<pair<int,int>,int>mpp;
        for(int i=0;i<n;i++){
            a[i]={intervals[i][0],intervals[i][1]};
            mpp[a[i]]=i;
        }
        sort(a.begin(),a.end());
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            int low=i,high=n-1;
            int z=-1;
            while(low<=high){
                int mid=(low+high)/2;
                if(a[mid].first>=a[i].second){
                    z=mid;
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            if(z==-1){
                ans[mpp[a[i]]]=z;
            }
            else{
                ans[mpp[a[i]]]=mpp[a[z]];
            }
        }
        return ans;
    }
};