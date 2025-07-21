class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        // Frequency map for pattern string
        unordered_map<char, int> mpp;
        for (char ch : p) {
            mpp[ch]++;
        }

        int cnt = mpp.size(); // unique characters to match
        int k = p.length();   // fixed window size
        int i = 0, j = 0;
        vector<int> ans;

        while (j < s.length()) {
            // Step 1: Processing character at j
            if (mpp.count(s[j])) {
                mpp[s[j]]--;
                if (mpp[s[j]] == 0) {
                    cnt--;
                }
            }

            // Step 2: Handle window size
            if (j - i + 1 < k) {
                j++;
            }
            else if (j - i + 1 == k) {
                // Valid window
                if (cnt == 0) {
                    ans.push_back(i); // Anagram found
                }

                // Step 3: Slide the window from i
                if (mpp.count(s[i])) {
                    if (mpp[s[i]] == 0) {
                        cnt++;
                    }
                    mpp[s[i]]++;
                }

                i++;
                j++;
            }
        }

        return ans;
    }
};