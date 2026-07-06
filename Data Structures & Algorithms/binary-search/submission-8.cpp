class Solution {
public:
    int search(vector<int>& nums, int target) {
        int mid,  l =0 , r = nums.size() -1;

        while (l<=r){
            if(nums[l] == target) return l;
            if(nums[r] == target) return r;
            mid = (r-l)/2 + l;
            if (nums[mid ] == target) return mid;
            else if (nums[mid ] > target) r= mid -1; 
            else  l= mid+1; 
        }return -1;
        
    }
};
