class Solution {
public:
    string getHint(string secret, string guess) {
        int bull = 0, cow = 0;
        unordered_map<char, int> a;

        
        for (int i = 0; i < secret.length(); ++i) {
            if (secret[i] == guess[i]) {
                bull++;
                guess[i] = 'a';
            } else {
                a[secret[i]]++;
            }
        }
        for (int i = 0; i < guess.length(); ++i) {
            if (a[guess[i]] > 0) {
                cow++;
                a[guess[i]]--;
            }
        }

        return to_string(bull) + "A" + to_string(cow) + "B";
    }
};