class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int rows=grid.size();
        int columns= grid[0].size();
        int perimeter=0;

        for(int i=0;i<rows;i++){
            for(int j=0;j<columns;j++){
                if(grid[i][j]==1){
                    perimeter+=4;
                }
                
            }
        }
        return perimeter;


    }
};