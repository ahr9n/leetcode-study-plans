class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr), cout.tie(nullptr);
        
        int n = grid.size(), m = grid[0].size();
        int dx[4] = {1, -1, 0, 0}, dy[4] = {0, 0, 1, -1};
        bool vis[305][305] = {{}};

        function<bool(int, int)> valid = [&](int i, int j){
            return (i >= 0 and i < n and j >= 0 and j < m and grid[i][j] == '1');
        };
             
        function<void(int, int)> solve = [&](int i, int j){
            if(!valid(i, j) or vis[i][j]) return;
            vis[i][j] = true;
            for(int k=0; k<4; ++k) solve(i+dx[k], j+dy[k]);
        };

        int ans = 0;
        for(int i = 0; i < grid.size(); ++i)
            for(int j = 0; j < grid[0].size(); ++j)
                if(grid[i][j] == '1' and !vis[i][j]) solve(i, j), ++ans;
        return ans;
    }
};
