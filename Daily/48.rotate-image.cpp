/*
 * @lc app=leetcode id=48 lang=cpp
 *
 * [48] Rotate Image
 */

// @lc code=start
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m = matrix.size(); // matrix size mxm
        int circle = m / 2;
        int dir[] = {0, 1, 0, -1, 0, 1};
        //cout << "size of matrix: " << m << endl;
        for(int i = 0; i < circle; i++) {
            int x = i, y = i;
            queue<int> q;
            for(int dir_idx = 0; dir_idx < 5; dir_idx++) {
                // run through matrix 1 more time
                for(int j = 0; j < m - (i * 2) - 1; j++) {
                    //cout << "x= " << x << " y= " << y << endl;
                    int num = matrix[x][y];
                    if(dir_idx > 0) {
                        // pop the element
                        matrix[x][y] = q.front();
                        q.pop();
                    }
                    q.push(num);
                    x = x + dir[dir_idx];
                    y = y + dir[dir_idx + 1];
                }
            }
        }
    }
};
// @lc code=end

