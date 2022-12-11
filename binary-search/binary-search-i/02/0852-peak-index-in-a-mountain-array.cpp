class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr), cout.tie(nullptr);
        
        int l = 0, r = arr.size() - 1, mid, ans;
        while(l <= r){
            mid = (l + r) >> 1;
            if(arr[mid] < arr[mid + 1]){
                ans = l = mid + 1;
            }else r = mid - 1;
        }
        return ans;
    }
};
