class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() ==0) return 0;
        if(nums.size() ==1) return 1;
        set< int> s (nums.begin(), nums.end());
            int next = *s.begin(), count=0, res=0;
        for ( int i : s){
            if(s.contains(next)) {count++; next++;}
            else{ count = 1; next =i+1; }

            res= max(res, count);
        }
        return res;
    }
};
