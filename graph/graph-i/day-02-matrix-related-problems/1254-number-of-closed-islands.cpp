class Solution {
public:
    int closedIsland(vector<vector<int>>& grid) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr), cout.tie(nullptr);
        
        int n = grid.size(), m = grid[0].size();
        int dx[4] = {1, -1, 0, 0}, dy[4] = {0, 0, 1, -1};

        function<bool(int, int)> valid = [&](int i, int j){
            return (i >= 0 and i < n and j >= 0 and j < m);
        };
             
        function<void(int, int)> solve = [&](int i, int j){
            if(!valid(i, j) or grid[i][j]) return;
            grid[i][j] = 1;
            for(int k=0; k<4; ++k) solve(i+dx[k], j+dy[k]);
        };
        for(int i = 0; i < n; ++i) solve(i, 0), solve(i, m-1);        
        for(int j = 0; j < m; ++j) solve(0, j), solve(n-1, j);      
        
        int ans = 0;
        for(int i = 0; i < n; ++i)
            for(int j = 0; j < m; ++j)
                if(!grid[i][j]) ans++, solve(i, j);
        
        return ans;
    }
};
