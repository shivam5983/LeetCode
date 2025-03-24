public class Solution {
    public int majorityElement(int[] nums) {
        int count = 0;
        int element = 0;

        for (int num : nums) {
            if (count == 0) {
                element = num;
            }
            count += (num == element) ? 1 : -1;
        }

        return element;
    }
}