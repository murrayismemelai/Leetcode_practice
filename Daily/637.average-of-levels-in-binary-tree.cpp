/*
 * @lc app=leetcode id=637 lang=cpp
 *
 * [637] Average of Levels in Binary Tree
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
// Note the type of variable (double vec)
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        if(!root) {
            return {};
        }
        queue<TreeNode*> q;
        vector<double> res;
        q.push(root);

        while(!q.empty()) {
            int n = q.size();
            double sum = 0;
            for(int i=0; i < n; i++) {
                TreeNode* curr = q.front();
                sum += curr -> val;
                if(curr -> left) {
                    q.push(curr -> left);
                }
                if(curr -> right) {
                    q.push(curr -> right);
                }
                q.pop();
            }
            res.push_back(sum / n);
        }

        return res;
    }
};
// @lc code=end

