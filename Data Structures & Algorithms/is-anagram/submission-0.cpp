class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>u(26,0);
        vector<int>v(26,0);
        for(int i=0;i<s.size();i++){
            u[s[i]-'a']++;
        }
        for(int i=0;i<t.size();i++){
            v[t[i]-'a']++;
        }
        if(u==v)return true;
        return false;
    }
};
