class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr), cout.tie(nullptr);
        
        int n = grid.size(), m = grid[0].size();
        int dx[4] = {1, -1, 0, 0}, dy[4] = {0, 0, 1, -1};
        bool vis[55][55] = {{}};

        function<bool(int, int)> valid = [&](int i, int j){
            return (i >= 0 and i < n and j >= 0 and j < m and grid[i][j]);
        };
             
        function<int(int, int)> solve = [&](int i, int j){
            if(!valid(i, j) or vis[i][j]) return 0;
            vis[i][j] = true;
            int sum = 1;
            for(int k=0; k<4; ++k) sum += solve(i+dx[k], j+dy[k]);
            return sum;
        };
        
        int maxi = 0;
        for(int i = 0; i < grid.size(); ++i)
            for(int j = 0; j < grid[0].size(); ++j)
                if(!vis[i][j] and grid[i][j]) maxi = max(maxi, solve(i, j));
        return maxi;
    }
};
