class Solution {
public:
    int fib(int n) {
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        if(n <= 1) return n;
        
        int a = 0, b = 1, c;
        for(int i = 2; i <= n; ++i){
            c = b;
            b = a + b;
            a = c;
        }
        return b;
    }
};
