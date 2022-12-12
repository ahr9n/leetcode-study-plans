class Solution {
public:
    int subtractProductAndSum(int n) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr), cout.tie(nullptr);
        
        string s = to_string(n);
        
        int product = 1, sum = 0;
        for(int i = 0; i < s.size(); ++i){
            product *= s[i] - '0';
            sum += s[i] - '0';
        }
        return product - sum;
    }
};
