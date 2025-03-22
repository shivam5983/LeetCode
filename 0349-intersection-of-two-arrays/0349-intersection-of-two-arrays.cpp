class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
      
    unordered_set<int> set1(nums1.begin(), nums1.end());  // Pehle array ke elements ko set mein store karna
    unordered_set<int> result;  // Intersection elements store karne ke liye

    for (int num : nums2) {  // Doosre array ke elements check karna
        if (set1.count(num)) {  // Agar element pehle set mein hai toh store karna
            result.insert(num);
        }
    }

    return vector<int>(result.begin(), result.end());  // Set ko vector mein convert karna aur return karna
}
    
};