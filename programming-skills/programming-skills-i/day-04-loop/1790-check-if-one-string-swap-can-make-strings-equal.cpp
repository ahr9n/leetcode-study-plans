class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr), cout.tie(nullptr);
        
        pair<char, char> a = {'$', '$'}, b = {'$', '$'};
        
        int f = 0;
        for(int i = 0; i < s1.size(); ++i)
            if(s1[i] != s2[i]){
                f++;
                if(f > 2) return false;
                if(f == 1) a.first = s1[i], b.first = s2[i];
                else a.second = s1[i], b.second = s2[i];
            }
        if(f == 1 or (f == 2 and (a.first != b.second or a.second != b.first))) return false;
        return true;
    }
};
