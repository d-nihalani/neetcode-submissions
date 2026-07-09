class Solution {
public:
    vector<int> t = vector<int> (46, -1);
    int rec (int n){
        if (n >=0 && n<=3) return n;
        if (t[n] != -1) return t[n];
        return t[n] = (rec(n-1) + rec(n-2));
    }

    int climbStairs(int n) {
      return rec ( n);
    }
};
