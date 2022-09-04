/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

// @lc code=start
// 6min
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) {
            return false;
        }

        unordered_map<char, int> mp;
        for(int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
            mp[t[i]]--;
        }

        for(auto iter = mp.begin(); iter != mp.end(); iter++) {
            if(iter -> second != 0) {
                return false;
            }
        }

        return true;
    }
};
// @lc code=end

