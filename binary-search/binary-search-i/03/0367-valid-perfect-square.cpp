class Solution {
public:
    bool isPerfectSquare(int num) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr), cout.tie(nullptr);

        long long l = 1, r = num, mid, now;
        while(l <= r){
            mid = (l + r) >> 1;
            now = mid * mid;
            if(now == num)
                return true;
            else if(now > num)
                r = mid - 1;
            else 
                l = mid + 1;
        }
        return false;
    }
};
