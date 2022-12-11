/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        long long l = 1, r = n, mid, ans;
        while(l <= r){
            mid = (l + r) >> 1;
            ans = guess(mid);
            if(ans == 0) return mid;
            else if(ans == -1){
                r = mid - 1;
            }else{
                l = mid + 1;
            }
        }
        return 0;
    }
};
