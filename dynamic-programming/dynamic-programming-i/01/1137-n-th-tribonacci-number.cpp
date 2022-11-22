class Solution {
public:
    int tribonacci(int n) {
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int tri[38] = {0, 1, 1};
        
        for(int i = 3; i <= n; ++i)
            tri[i] = tri[i - 1] + tri[i - 2] + tri[i - 3];
        
        return tri[n];
    }
};
