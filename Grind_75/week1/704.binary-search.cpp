/*
 * @lc app=leetcode id=704 lang=cpp
 *
 * [704] Binary Search
 */

// @lc code=start
// 13min
// handle boudary loop condition
// test1. left != right (TLE if target is smaller than all elements)
// test2. left < right (AC)
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1, mid;

        while(left < right) {
            mid = left + (right - left) / 2;
            //cout << mid << endl;
            if(nums[mid] == target) {
                return mid;
            } else if(nums[mid] > target) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return nums[left] == target ? left : -1;
    }
};
// @lc code=end

