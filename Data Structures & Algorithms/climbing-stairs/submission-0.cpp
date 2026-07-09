class Solution {
public:
    int rec (int n){
        if (n >=0 && n<=3) return n;
        return (rec(n-1) + rec(n-2));
    }

    int climbStairs(int n) {
      return rec ( n);
    }
};
