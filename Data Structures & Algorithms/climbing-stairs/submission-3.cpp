class Solution {
public:
    int climbStairs(int n) {
        vector<int> v (n+1, -1);
        for (int i=1; i<=n; i++){
            if(i <=3 ) v[i] = i;
            else v[i] = v[i-2] + v[i-1];
        }return v[n];
    }
};
