class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res ;
        if (strs.empty()) return res;
        unordered_map< string , vector<string> > pres;
        for (const string s :  strs){
            //get freq
            vector <int> freq (26,0) ;
            for (char c : s){
                freq[c -'a'] ++;
            }
            //convert to key
            string key ="";
            for (const auto& f : freq){
                key+= f + '#';
            }
                pres[key].push_back(s);
        
        }

        for (const auto& [a,b] : pres){
            res.push_back(b);
        }
return res;
    }
};
