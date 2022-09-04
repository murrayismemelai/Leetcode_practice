/*
 * @lc app=leetcode id=326 lang=cpp
 *
 * [326] Power of Three
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfThree(int n) {
        // if(n <= 0) {
        //     return false;
        // }
        // if(n == 1) {
        //     return true;
        // }

        // return (n % 3 == 0) && isPowerOfThree(n / 3);

        // int max_num = pow(3, static_cast<int>(log(INT_MAX) / log(3)));
        // cout << max_num;
        int max_num = 1162261467;
        return (n > 0 && (max_num % n == 0));
    }
};
// @lc code=end

