class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr), cout.tie(nullptr);

        int n = grid.size();
        if(grid == vector<vector<int>> (n, vector<int>(n, 0))
          or grid == vector<vector<int>> (n, vector<int>(n, 1))) 
            return -1;

        queue<pair<int, int>> q1, q2;
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                if (grid[i][j] == 1)
                    q1.push({i - 1, j}), q1.push({i + 1, j}), 
                    q1.push({i, j - 1}), q1.push({i, j + 1});
        
        function<bool(int, int)> valid = [&](int i, int j){
            return (i >= 0 and i < n and j >= 0 and j < n);
        };
        
        int ans = 0;
        while (!q1.empty()) {
            ++ans;
            while (!q1.empty()) {
                int i = q1.front().first, j = q1.front().second;
                q1.pop();
                
                if (valid(i, j) and !grid[i][j]) {
                    grid[i][j] = ans;
                    q2.push({i - 1, j}), q2.push({i + 1, j}), 
                    q2.push({i, j - 1}), q2.push({i, j + 1});
                }
            }
            swap(q1, q2);
        }
        return ans - 1;
    }
};
