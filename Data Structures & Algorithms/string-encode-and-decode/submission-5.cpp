class Solution {
public:

    string encode(vector<string>& strs) {
        string e; 
        for ( string s : strs ){
            int len = s.length();
            e += to_string( len) + '#' + s;
            // cout<<e<<endl;
        }
        return e;
    }

    vector<string> decode(string s) {
        vector<string> d;
        int len = 0;
        string st;
        for(int i=0 ; i< s.length();  i += len+1){  
            while (s[i] != '#')  { st+=s[i]; i++;}
            len = stoi(st);
            st="";
            string decoded = s.substr(i+1 , len);
            d.push_back(decoded);
        }
        return d;
    }
};
