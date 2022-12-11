class Solution {
public:
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr), cout.tie(nullptr);
        
        int n = grid1.size(), m = grid1[0].size(), cnt, mutual;
        int dx[4] = {1, -1, 0, 0}, dy[4] = {0, 0, 1, -1};

        function<bool(int, int)> valid = [&](int i, int j){
            return (i >= 0 and i < n and j >= 0 and j < m);
        };     
        function<void(int, int)> solve = [&](int i, int j){
            if(!valid(i, j) or !grid2[i][j]) return;
            cnt++, mutual += grid1[i][j], grid2[i][j] = 0;
            for(int k=0; k<4; ++k) solve(i+dx[k], j+dy[k]);
        };

        int ans = 0;
        for(int i = 0; i < n; ++i)
            for(int j = 0; j < m; ++j)
                if(grid2[i][j]){
                    cnt = mutual = 0;
                    solve(i, j);
                    ans += (cnt == mutual);
                }
        return ans;
    }
};
