class Solution {
public:
    int hammingWeight(uint32_t n) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr), cout.tie(nullptr);
        
        int ans = 0;
        while(n) ans += (n & 1), n >>= 1;
        return ans;
    }
};
