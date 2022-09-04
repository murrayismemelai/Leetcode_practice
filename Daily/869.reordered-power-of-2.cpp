/*
 * @lc app=leetcode id=869 lang=cpp
 *
 * [869] Reordered Power of 2
 */

// @lc code=start
class Solution {
public:
    bool reorderedPowerOf2(int n) {
        //vector<string> pow2;
        string item;

        string input = to_string(n);
        sort(input.begin(), input.end());

        for(int i = 0; i < log2(1000000000); i++) {
            item = to_string(static_cast<int>(pow(2, i)));
            sort(item.begin(), item.end());
            //pow2.push_back(item);

            //cout << i << " " << item << " " << input << endl;

            if(item == input) {
                return true;
            }
        }

        return false;
    }
};
// @lc code=end

