class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i=0;
        int l= nums.size()-1;
        if (nums.size() ==0) return -1;
        //if (nums.size() ==1 && target!=nums[0]) return -1;
        if (nums[0] ==target) return 0;

        while (i<l){
            int n = l-i;
            if(nums[i] == target ) return i ;
            if(nums[l] == target ) return l ;
            
            if( nums[n/2 + i]  > target) l = n/2 +i -1;
            else if( nums[n/2 + i] < target) i = n/2 +i +1   ;
            else return n/2 + i;
        }
        return -1;
    }
};
