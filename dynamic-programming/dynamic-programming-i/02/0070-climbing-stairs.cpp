class Solution {
private:
    int memo[50];
    
    int dp(int n){
        if(n == 1) return 1;
        if(n == 2) return 2;
        
        if(~memo[n]) return memo[n];
        return memo[n] = dp(n - 1) + dp(n - 2);
    }
    
public:
    int climbStairs(int n) {
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        memset(memo, -1, sizeof memo);
        return dp(n);
    }
};
