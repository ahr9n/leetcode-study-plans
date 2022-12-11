class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr), cout.tie(nullptr);
        
        int n = image.size(), m = image[0].size(), orig = image[sr][sc];
        int dx[4] = {1, -1, 0, 0}, dy[4] = {0, 0, 1, -1};
        bool vis[55][55] = {{}};

        function<bool(int, int)> valid = [&](int i, int j){
            return (i >= 0 and i < n and j >= 0 and j < m and image[i][j] == orig);
        };
             
        function<void(int, int)> solve = [&](int i, int j){
            if(!valid(i, j) or vis[i][j]) return;
            vis[i][j] = true, image[i][j] = color;
            for(int k=0; k<4; ++k) solve(i+dx[k], j+dy[k]);
        };
        
        solve(sr, sc);
        
        return image;
    }
};
