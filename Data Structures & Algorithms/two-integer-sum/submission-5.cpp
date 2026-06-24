class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        if (nums.size() < 2) return {};
        int tofind;
        for (int i = 0; i < nums.size(); i++) {
            tofind = target - nums[i];
            auto comp = find(nums.begin() + i + 1, nums.end(), tofind);
            if (comp != nums.end()) {
                int d = distance(nums.begin(), comp);
                return {i, d};
            }
        }
        return {};
    }
};
