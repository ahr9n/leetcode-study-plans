class Solution {
public:
    int rob(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int mem[105][2];
        memset(mem, -1, sizeof mem);
        
        function<int(int, bool)> dp = [&](int i, bool took_prev) {
            if(i == nums.size()) return 0;
            int &ret = mem[i][took_prev];
            if(~ret) return ret;
            int ch1 = dp(i+1, false);
            int ch2 = !took_prev ? nums[i]+dp(i+1, true) : -1e5;
            return ret = max(ch1, ch2);
        };
        return dp(0, false);
    }
};
