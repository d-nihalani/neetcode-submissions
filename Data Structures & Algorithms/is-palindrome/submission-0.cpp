class Solution {
   public:
    bool isPalindrome(string s) {
        int n = s.length();
        for (int c = 0; c < n; c++) {
            if (isalnum(s[c])) {
                s += tolower(s[c]);
            }
        }

        s = s.substr(n);
        n = s.length();
        for (int i = 0; i < n; i++) {
            if (s[i] == s[n - i - 1])
                continue;
            else
                return false;
        }
        return true;
    }
};
