class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr), cout.tie(nullptr);
        
        sort(nums.begin(), nums.end());
        
        for(int i = nums.size() - 3; ~i; --i){
            if(nums[i] + nums[i + 1] > nums[i + 2])
                return nums[i] + nums[i + 1] + nums[i + 2];
        }
        return 0;
    }
};
