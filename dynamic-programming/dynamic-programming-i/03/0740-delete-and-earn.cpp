class Solution {
public:
    int freq[(int)1e4 + 5];
    int memo[(int)2e4 + 5][2];
    vector<int> a;
    int n;

    int dp(int i, int prev){
        if(i >= n) return 0;
        
        int &ret = memo[i][prev];
        if(~ret) return ret;
        
        int ch1 = 0;
        if(!prev or (prev and i and a[i-1]+1 != a[i])) 
            ch1 = a[i] * freq[a[i]] + dp(i + 1, 1);
        int ch2 = dp(i + 1, 0);
        
        return ret = max(ch1, ch2);
    }
    
    int deleteAndEarn(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr), cout.tie(nullptr);
        
        for(int i:nums) ++freq[i];
        sort(nums.begin(), nums.end());
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        
        a = nums, n = a.size();
        
        memset(memo, -1, sizeof memo);
        return dp(0, 0);
    }
};
