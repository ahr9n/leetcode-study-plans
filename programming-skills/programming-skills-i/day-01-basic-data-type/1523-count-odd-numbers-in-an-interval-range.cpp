class Solution {
public:
    int countOdds(int low, int high) {
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        /* odds = ?
            low : high
            o   : e => (3, 6) = (6 - 3) / 2 + 1 = [3, 5]
            e   : o => (2, 7) = (7 - 2) / 2 + 1 = [3, 5, 7]
            o   : o => (3, 9) = (9 - 3) / 2 + 1 = [3, 5, 7, 9]
            e   : e => (2, 8) = (8 - 2) / 2 = [3, 5, 7]
        */
        
        return (high - low) / 2 + (low % 2 == 1 or high % 2 == 1);
    }
};
