class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr), cout.tie(nullptr);

        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());
        
        int ans = 0;
        for(int i = 0; i < arr1.size(); ++i)
            if (upper_bound(arr2.begin(), arr2.end(), arr1[i] + d) 
                == lower_bound(arr2.begin(), arr2.end(), arr1[i] - d)) ++ans;
        
        return ans;
    }
};
