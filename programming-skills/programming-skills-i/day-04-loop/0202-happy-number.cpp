class Solution {
public:
    bool isHappy(int n) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr), cout.tie(nullptr);
        
        string s = to_string(n), t;
        int sum, now;
        set<int> st = {n};
        
        while(true){
            t.clear(), sum = 0;
            for(auto& i:s){
                now = i - '0';
                sum += now * now;
            }
            s = to_string(sum);
            if(sum == 1) break;
            if(st.count(sum)) return false;
            st.insert(sum);
            
        }
        return true;
    }
};
