class Solution {
public:

    void parentheses(int n,int left, int right, vector<string>&ans,string&temp){
        if(left+right==2*n){
            ans.push_back(temp);
            return;
        }

        //left
        if(left<n){

            temp.push_back('(');
            parentheses(n,left+1,right,ans,temp);
            temp.pop_back();
        }

        //right
        if(right<left){
            temp.push_back(')');
            parentheses(n,left,right+1,ans,temp);
            temp.pop_back();
        }
    }


    vector<string> generateParenthesis(int n) {

        string temp;
        vector<string>ans;

        parentheses(n,0,0,ans,temp);
        
        return ans;
    }
};