/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
// 7min
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // maximize -> DP
        int buy_in = INT_MAX;
        int sell_out = 0;

        for(int p : prices) {
            sell_out = max(sell_out, p - buy_in);
            buy_in = min(buy_in, p);
        }

        return sell_out;
    }
};
// @lc code=end

