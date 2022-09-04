/*
 * @lc app=leetcode id=1329 lang=cpp
 *
 * [1329] Sort the Matrix Diagonally
 */

// @lc code=start
class Solution {
    typedef vector<vector<int>> vec2d;
public:
    vector<vector<int>> diagonalSort(vec2d& mat) {
        int m = mat.size(), n = mat[0].size();
        //cout << "size of matrix " << m << " " << n << endl;

        int start_m = 0, start_n = n - 1;
        for(; start_n >=0; start_n--) {
            collect_give(mat, start_m, start_n, m, n);
            //cout << "is empty " << v.empty() << endl;
            //cout << "#######";
        }
        start_n++;
        for(; start_m < m; start_m++) {
            collect_give(mat, start_m, start_n, m, n);
        }

        return mat;
    }

    void collect_give(vec2d &mat, int m, int n, int end_m, int end_n) {
        //cout << "start sorting from " << m << " " << n << endl;
        for(; (m < end_m) && (n < end_n); m++, n++) {
            //cout << "value to save " << mat[m][n] << " ";
            v.push_back(mat[m][n]);
        }

        //cout << endl;
        sort(v.begin(), v.end());
        m--;
        n--;
        //cout << "check " << m << " " << n << endl;

        for(; m >= 0 && n >= 0; m--, n--) {
            mat[m][n] = v.back();
            v.pop_back();
        }
        //print_matrix(mat);
    }

    // void print_matrix(vec2d &mat) {
    //     for(int i = 0; i< mat.size(); i++) {
    //         for(int j = 0; j< mat[0].size(); j++) {
    //             cout << mat[i][j] << " ";
    //         }
    //         cout << endl;
    //     }
    // }

private:
    vector<int> v;
};
// @lc code=end

