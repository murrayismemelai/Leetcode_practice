/*
 * @lc app=leetcode id=342 lang=cpp
 *
 * [342] Power of Four
 */

// @lc code=start
/*
- takes 13min to complete
- google the c++ STL of log2
- submmit 3 times:
    1. WA: forget type of log
    2. RE: need to consider range of input
    3. AC
*/
class Solution {
public:
    // O(1) version
    bool isPowerOfFour(int n) {
        if(n <= 0) {
            return false;
        }
        float lg = log2(n);
        //cout << (static_cast<int>(lg / 2) * 2) << "," << lg << endl;
        return (static_cast<int>(lg / 2) * 2) == lg;
    }

    // Recursive O(log(n))
    // bool isPowerOfFour(int n) {
    //     if(n <= 0) {
    //         return false;
    //     }
    //     if(n == 1) {
    //         return true;
    //     }

    //     return n % 4 == 0 && isPowerOfFour(n >> 2);
    // }
};
// @lc code=end

