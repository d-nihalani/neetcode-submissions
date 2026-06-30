class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        if (nums.size() == 1) return 1;
        set<int> mp;
        int sm = nums[0];
        for (int i = 0; i < nums.size(); i++) {
            mp.insert(nums[i]);
        }
        int count = 0, res=0;
            int tmp = *mp.begin();
        for (int i : mp ) {
           if(mp.find(tmp) == mp.end()){tmp= i+1; count=1;}
           else {
            count++; 
            tmp++;
           }
            res = max(res,count);
        }
        return res;
    }
};
