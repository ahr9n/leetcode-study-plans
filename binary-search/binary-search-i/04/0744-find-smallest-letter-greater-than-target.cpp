class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int l = 0, r = letters.size() - 1, mid, ans = 0;
        while(l <= r){
            mid = (l + r) / 2;
            if(letters[mid] > target)
                ans = mid, r = mid - 1;
            else 
                l = mid + 1;
        }
        return letters[ans];
    }
};
