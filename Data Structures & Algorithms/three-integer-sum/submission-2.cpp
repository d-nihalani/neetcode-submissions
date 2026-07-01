class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> res;
        for (int i = 0; i < nums.size() - 2; i++) {  // fix one.
            // fixed is nums[i]
            unordered_map<int, int> m;
            for (int j = i + 1; j < nums.size(); j++) {
                int tofind = -(nums[i] + nums[j]);
                if (m.find(tofind) != m.end()) {
                   vector<int> v{nums[i], nums[j], tofind};
                   sort(v.begin(), v.end());
                    res.insert(v);
                } else {
                    //  cout<<"y"<<endl;
                    m[nums[j]] = j;
                }
            }
        }
        vector<vector<int>> r(res.begin(), res.end());
        return r;
    }
};
