class Solution {
public:

    int bfs(int row, int col, vector<vector<int>>& visited, vector<vector<int>>& grid){
        int n = grid.size();
        int m = grid[0].size();

        queue<pair<int,int>>q;
        q.push({row,col});
        visited[row][col] = 1;

        int area = 0;
        int dr[4] = {-1, 1, 0, 0};
        int dc[4] = {0, 0, -1, 1};

        while(!q.empty()){
            int r = q.front().first;
            int c = q.front().second;
            q.pop();

            area++;

            for(int i=0;i<4;i++){
                int nr = r + dr[i];
                int nc = c + dc[i];

                if(nr>=0 && nr<n && nc>=0 && nc<m && grid[nr][nc] == 1 && !visited[nr][nc]){
                    visited[nr][nc] = 1;
                    q.push({nr, nc});
                } 
            }
        }
        return area;
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0;

        vector<vector<int>>visited(n, vector<int>(m,0));

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == 1 && !visited[i][j]){
                    ans = max(ans, bfs(i,j,visited,grid));
                }
            }
        }
        
        return ans;
    }
};