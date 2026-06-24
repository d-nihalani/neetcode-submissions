class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mp;
        int n=s.length();
        int m=t.length();
        if(n!=t.length()) return false;
        for(int i=0; i<n; i++){
            mp[s[i]]++;
        }
        for (int i=0 ; i<m; i++){
            if(mp.find(t[i])!=mp.end()){
                mp[t[i]]--;
                if(mp[t[i]] < 0 ) return false;
            }
            else return false;
        } return true;
    }
};
