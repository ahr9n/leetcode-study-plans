class Solution {
public:
    int mySqrt(int x) {   
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        if(x == 0) return 0;
        long double l = 0, r = x, mid, EPS = 2E-9;
        while(l <= r){
            mid = (l + r) / 2;
            if(abs(x - mid * mid) <= EPS) break;
            else if(mid * mid > x) r = mid;
            else l = mid;
        }
        return int(mid + EPS);
    }
};
