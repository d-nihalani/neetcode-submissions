class Solution {
public:
    vector<int> v = vector <int> (101, -1);
    int rec(vector<int>& nums, int st){
        if(st >= nums.size() ) return 0;
        if(v[st] !=-1) return v[st];
        return v[st] = nums[st] + max (rec(nums, st+2), rec(nums,st+3));
    }

    int rob(vector<int>& nums) {
        return max ( rec( nums, 0),  rec(nums,1) );
    }
};
