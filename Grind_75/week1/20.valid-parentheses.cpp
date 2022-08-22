/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
// 13 mins
// - initialize map
// - stack STL pop(), push()
// Submit 2 times
//    1. RE of merge empty stack & stack top()
//    2. AC

class Solution {
public:
    bool isValid(string s) {
        stack<char> bracks;
        unordered_map<char, char> mp = {{'(', ')'}, {'[', ']'}, {'{', '}'}};

        for(char c : s) {
            if(mp.find(c) == mp.end()) { // right bracket case
                if(bracks.empty()) {
                    return false;
                } else if(mp[bracks.top()] != c) {
                    return false;
                }
                bracks.pop();
            } else { // left bracket case
                bracks.push(c);
            }
            
        }

        return bracks.empty();
    }
};
// @lc code=end

