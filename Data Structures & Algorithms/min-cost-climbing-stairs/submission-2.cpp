class Solution {
   public:
    vector<int> c = vector<int>(102, -1);
    int rec( vector<int> cost, int n) {
        if(n==0 || n==1) return 0; //cost 0 to step up n star from i=1;
        if(c[n]!=-1) return c[n];
        return c[n] = min(rec(cost, n-1) + cost[n-1] , rec(cost,n-2) +cost[n-2]);
    }
    int minCostClimbingStairs(vector<int>& cost) { 
        return rec(cost, cost.size());
    }
};
