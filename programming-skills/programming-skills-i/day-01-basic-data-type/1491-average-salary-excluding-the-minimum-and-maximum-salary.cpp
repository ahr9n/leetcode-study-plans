class Solution {
public:
    double average(vector<int>& salary) {
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        sort(salary.begin(), salary.end());
        
        double ans = 0;
        for(int i = 1; i < salary.size() - 1; ++i) ans += salary[i];
        ans /= salary.size() - 2;
        
        return ans;
    }
};
