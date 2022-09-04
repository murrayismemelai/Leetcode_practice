/*
 * @lc app=leetcode id=1448 lang=cpp
 *
 * [1448] Count Good Nodes in Binary Tree
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
// 
class Solution {
int res = 0;
public:
    int goodNodes(TreeNode* root) {
        dfs(root, INT_MIN);
        return res;
    }

    void dfs(TreeNode* root, int max_num) {
        if(root==NULL) {
            return;
        }
        if(root -> val >= max_num) {
            res += 1;
        }

        dfs(root -> left, max(root -> val, max_num));
        dfs(root -> right, max(root -> val, max_num));
    }
};
// @lc code=end

