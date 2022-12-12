class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr), cout.tie(nullptr);

        sort(arr.begin(), arr.end());
        
        int diff = arr[1] - arr[0];
        for(int i = 1; i + 1 < arr.size(); ++i)
            if(arr[i + 1] - arr[i] != diff) return false;
        
        return true;
    }
};
