class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>count(26,0);

        for(char ch: s){
            count[ch-'a']++;
        }
        for(char ch : t){
            count[ch-'a']--;
        }

        for(int cnt : count){
            if(cnt!=0){
                return false;
            }
        }
        return true;

    }
};