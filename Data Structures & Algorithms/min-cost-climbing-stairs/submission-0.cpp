class Solution {
   public:
    vector<int> c = vector<int>(102, -1);
    int rec( vector<int> cost, int n) {
        if (n == 0) return 0;
        if (n == 1 || (n == 2)) return cost[n - 1];
        if (c[n] != -1) return c[n];
        return c[n] = cost[n-1]+ (min(rec(cost, n - 1), rec(cost, n - 2)));
    }
    int minCostClimbingStairs(vector<int>& cost) { 
        cost.push_back(0);
        return rec(cost, cost.size()); }
};
