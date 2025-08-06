class Solution {
public:
    int sum=0;
    int row[9]={0};
    int col[9]={0};
    int diag_dw[17]={0};
    int diag_up[17]={0};
    bool check(int rows,int cols,int n){
        if(row[rows] || col[cols] || diag_up[n-1+rows-cols] || diag_dw[rows+cols])
        return false;
        else return true;
    }
    void solve(int cols,int n){
        if(cols==n) {
            sum+=1;
            return ;
        }
        for(int rows=0;rows<n;rows++){
            if(check(rows,cols,n)){
                row[rows]=1;
                col[cols]=1;
                diag_dw[rows+cols]=1;
                diag_up[n-1+rows-cols]=1;
                solve(cols+1,n);
                row[rows]=0;
                col[cols]=0;
                diag_dw[rows+cols]=0;
                diag_up[n-1+rows-cols]=0;
            }
        }
    }
    int totalNQueens(int n) {
      solve(0,n); 
      return sum; 
    }
};