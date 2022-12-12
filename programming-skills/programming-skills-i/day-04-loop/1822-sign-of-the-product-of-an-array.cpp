class Solution {
public:
    int arraySign(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr), cout.tie(nullptr);
        
        int n = 0;
        for(auto& i:nums){
            if(i == 0) return 0;
            else if(i < 0) n++; 
        }
        return (n & 1 ? -1 : 1);
    }
};
