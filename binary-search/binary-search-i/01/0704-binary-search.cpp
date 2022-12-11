class Solution {
public:
    int search(vector<int>& nums, int target) {
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int l = 0, r = nums.size() - 1, mid;        
        while(l <= r){
            mid = (l + r) >> 1;
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] > target)
                r = mid - 1;
            else
                l = mid + 1;
        }
        return -1;
    }
};
