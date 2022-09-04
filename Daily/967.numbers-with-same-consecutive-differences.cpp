/*
 * @lc app=leetcode id=967 lang=cpp
 *
 * [967] Numbers With Same Consecutive Differences
 */

// @lc code=start
class Solution {
public:
    vector<int> numsSameConsecDiff(int n, int k) {
        // recursion
        vector<int> res;
        for(int i = 1; i < 10; i++) {
            dfs_numsSameConsecDiff(n - 1, k, i, res);
        }

        return res;
    }

    void dfs_numsSameConsecDiff(int n, int k, int num, vector<int>& res) {
        if(n == 0) {
            res.push_back(num);
            return;
        }

        int digit = num % 10;
        if(digit + k < 10) {
            dfs_numsSameConsecDiff(n - 1, k, num * 10 + (digit + k), res);
        }
        
        if(k!= 0 && digit - k >= 0) {
            dfs_numsSameConsecDiff(n - 1, k, num * 10 + (digit - k), res);
        }
    }
};
// @lc code=end

