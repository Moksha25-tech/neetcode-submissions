class Solution {
public:
    vector<vector<string>> ans;
    vector<int> curr;
    vector<int> visited;
    vector<int> nums;

    void dfs(vector<int>& nums) {
        // All rows filled
        if (curr.size() == nums.size()) {
            vector<string> board(nums.size(), string(nums.size(), '.'));

            for (int row = 0; row < nums.size(); row++) {
                board[row][curr[row] - 1] = 'Q';
            }

            ans.push_back(board);
            return;
        }

        for (int i = 0; i < nums.size(); i++) {

            if (visited[i])
                continue;

            bool ok = true;

            // Current row = curr.size()
            for (int row = 0; row < curr.size(); row++) {

                // Same diagonal?
                if (abs(curr[row] - nums[i]) == abs(row - (int)curr.size())) {
                    ok = false;
                    break;
                }
            }

            if (!ok)
                continue;

            visited[i] = 1;
            curr.push_back(nums[i]);

            dfs(nums);

            curr.pop_back();
            visited[i] = 0;
        }
    }

    vector<vector<string>> solveNQueens(int n) {

        visited.assign(n, 0);

        for (int i = 1; i <= n; i++)
            nums.push_back(i);

        dfs(nums);

        return ans;
    }
};