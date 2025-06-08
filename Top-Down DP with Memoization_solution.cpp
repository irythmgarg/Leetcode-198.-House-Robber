class Solution {
public:
    int t[101];  // DP table to store intermediate results

    /**
     * Recursive function to calculate maximum money that can be robbed.
     *
     * @param nums - vector containing money in each house
     * @param i - current index (house number)
     * @return Maximum money that can be robbed from index i onwards
     */
    int hlo(vector<int>& nums, int i) {
        // Base case: if index exceeds the array size, return 0
        if (i >= nums.size()) return 0;

        // If already computed, return the cached value
        if (t[i] != -1) return t[i];

        // Option 1: Rob current house and skip the next
        int first = nums[i] + hlo(nums, i + 2);

        // Option 2: Skip current house
        int second = hlo(nums, i + 1);

        // Return the maximum of both choices and store in dp table
        return t[i] = max(first, second);
    }

    /**
     * Main function to initiate the rob sequence.
     *
     * @param nums - vector of house values
     * @return Maximum money that can be robbed
     */
    int rob(vector<int>& nums) {
        memset(t, -1, sizeof(t));  // Initialize dp table with -1
        return hlo(nums, 0);       // Start from the first house
    }
};
