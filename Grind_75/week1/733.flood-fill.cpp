/*
 * @lc app=leetcode id=733 lang=cpp
 *
 * [733] Flood Fill
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int match_color = image[sr][sc];
        if(match_color != color) {
            flood_dfs(image, sr, sc, color, match_color);
        }

        return image;
    }

    void flood_dfs(vector<vector<int>>& image, int sr, int sc, int color, int match_color) {
        if(sr < 0 || sc < 0 || sr >= image.size() || sc >= image[0].size()) {
            return;
        }

        if(image[sr][sc] != match_color) {
            return;
        }

        image[sr][sc] = color;

        flood_dfs(image, sr + 1, sc, color, match_color);
        flood_dfs(image, sr - 1, sc, color, match_color);
        flood_dfs(image, sr, sc + 1, color, match_color);
        flood_dfs(image, sr, sc - 1, color, match_color);
    }
};
// @lc code=end

