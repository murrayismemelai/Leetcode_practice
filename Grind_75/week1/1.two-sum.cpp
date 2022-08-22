/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
// 8 mins
// confuse on mp.find("variable") 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp; // <num_needtofind, index>
        for(int i = 0; i < nums.size(); i++) {
            int find_num = target - nums[i];
            if(mp.find(find_num) != mp.end()) {
                return {mp[find_num], i};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};
// @lc code=end

