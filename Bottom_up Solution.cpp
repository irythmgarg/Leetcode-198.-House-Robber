#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    // -------------------------------
    // 1️⃣ Top-Down (Memoized Recursion)
    // -------------------------------
    int t1[101]; // DP array for memoization

    int robTopDown(vector<int>& nums, int i) {
        if (i >= nums.size())
            return 0;
        if (t1[i] != -1)
            return t1[i];
        // Choose max of: rob current + jump 2 or skip current
        return t1[i] = max(nums[i] + robTopDown(nums, i + 2), robTopDown(nums, i + 1));
    }

    int robTopDownEntry(vector<int>& nums) {
        memset(t1, -1, sizeof(t1));
        return robTopDown(nums, 0);
    }

    // -------------------------------
    // 2️⃣ Bottom-Up (Tabulation)
    // -------------------------------
    int robBottomUp(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        if (n == 1) return nums[0];

        int t[101]; // DP table
        t[0] = 0;
        t[1] = nums[0];

        // Fill the table iteratively
        for (int i = 2; i <= n; i++) {
            // Either rob current house (i-1) + t[i-2], or skip it
            t[i] = max(t[i - 2] + nums[i - 1], t[i - 1]);
        }

        return t[n];
    }

    // -------------------------------
    // 3️⃣ Pure Recursion (No Memoization)
    // -------------------------------
    int robPureRecursion(vector<int>& nums, int i) {
        if (i >= nums.size())
            return 0;
        return max(nums[i] + robPureRecursion(nums, i + 2), robPureRecursion(nums, i + 1));
    }

    int robPureRecursionEntry(vector<int>& nums) {
        return robPureRecursion(nums, 0);
    }
};
