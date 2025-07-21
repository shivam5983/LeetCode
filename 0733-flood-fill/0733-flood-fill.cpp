class Solution {
public:

    void dfs(vector<vector<int>>&a, int i, int j , int color, int k){

        int n= a.size();
        int m = a[0].size();

        if(i<0 or i>=n or j<0 or j>=m or a[i][j]!= color){
            return;
        }
        a[i][j]=k;


        dfs(a,i+1,j,color,k);
        dfs(a,i-1,j,color,k);
        dfs(a,i,j+1,color,k);
        dfs(a,i,j-1,color,k);

    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {

            int originalColor = image[sr][sc];

        if (originalColor == color) return image;

        dfs(image, sr, sc, originalColor, color);
        return image;
        
    }
};