class Solution {
public:
    int rob(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int mem[105][2][2];
        memset(mem, -1, sizeof mem);
        
        function<int(int, bool, bool)> dp = [&](int i, bool took_prev, bool took_first) {
            if(i == nums.size()) return 0;
            int &ret = mem[i][took_prev][took_first];
            if(~ret) return ret;
            int ch1 = dp(i+1, false, took_first), ch2 = -1e5, ch3 = -1e5;
            if(!took_prev){
                if(i+1 == nums.size() and took_first); 
                else{
                    if(i == 0) ch2 = nums[i] + dp(i+1, true, true);
                    else ch2 = nums[i] + dp(i+1, true, took_first);
                }
            }
            return ret = max(ch1, ch2);
        };
        return dp(0, false, false);
    }
};
