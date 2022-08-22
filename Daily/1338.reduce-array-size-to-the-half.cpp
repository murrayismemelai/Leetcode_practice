/*
 * @lc app=leetcode id=1338 lang=cpp
 *
 * [1338] Reduce Array Size to The Half
 */

// @lc code=start
class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int, int> m;
        priority_queue<int> q;

        for(auto i:arr) {
            m[i] += 1;
        }

        for(auto &it : m) {
            q.push(it.second);
        }
        
        int half = arr.size() / 2;
        int cnt = 0, res = 0;
        while(cnt < half) {
            cnt += q.top();
            res ++;
            q.pop();
        }

        return res;

    }
};
// @lc code=end

