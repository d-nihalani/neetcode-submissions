class Solution {
public:
    bool isPalindrome(string s) {
        int n  = s.length();
        int r= 0, l = n-1 ;

        while(r<l){
            while(!isalnum(s[r])) r++;
            while(!isalnum(s[l])) l--;

            if(r<l && tolower(s[r])!=tolower(s[l])) return false;
            r++; l--;
        }
        return true;
        
    }
};
