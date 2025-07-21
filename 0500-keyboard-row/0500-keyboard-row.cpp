class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> result;
        for (int i=0;i<words.size();i++) {
            string word = words[i]; //word="hello"
            int row1 = 0, row2 = 0, row3 = 0;
            for (int j=0;j<word.size();j++) {
                char ch = word[j]; //ch='H', ch='e'
                ch = tolower(ch); // H to h
                if (string("qwertyuiop").find(ch) != string::npos) row1++;
                if (string("asdfghjkl").find(ch) != string::npos) row2++;
                if (string("zxcvbnm").find(ch) != string::npos) row3++;
            }
                if((row1!=0 && row2==0 && row3==0)||
                (row1==0 && row2!=0 && row3==0)||
                (row1==0 && row2==0 && row3!=0))//1 hi row non zero h 
                result.push_back(word);
        }
        return result;
    }
};