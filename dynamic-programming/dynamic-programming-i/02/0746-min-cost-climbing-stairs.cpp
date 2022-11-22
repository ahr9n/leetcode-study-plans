class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int mem[1005];
        memset(mem, -1, sizeof mem);
        
        function<int(int)> dp = [&](int i) {
            if(i >= cost.size()) return 0;
            int &ret = mem[i];
            if(~ret) return ret;
            return ret = cost[i] + min(dp(i+1), dp(i+2));
        };
        return min(dp(0), dp(1));
    }
};
