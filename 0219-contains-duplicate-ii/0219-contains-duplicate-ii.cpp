class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
          unordered_set<int> seen;


           for (int i = 0; i < nums.size(); i++) {
            // Agar element pehle se set mein hai to duplicate mil gaya
            if (seen.find(nums[i]) != seen.end()) {
                return true;
            }

            // Nahi mila to set mein daal do
            seen.insert(nums[i]);

            // Window size ko control karne ke liye:
            // Agar set ka size > k ho gaya to window ke bahar ka element remove karo
            if (seen.size() > k) {
                seen.erase(nums[i - k]);
            }
        }

        return false;
        
        
    }
};