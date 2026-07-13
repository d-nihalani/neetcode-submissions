#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> v;

    int rec(vector<int>& nums, int i, int f) {
        if ((f == 0 && i == nums.size() - 1) || i >= nums.size()) return 0;
        
        if (v[i] != -1) return v[i];
        
        return v[i] = nums[i] + max(rec(nums, i + 2, f), rec(nums, i + 3, f));
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        if (n == 1) return nums[0];
        if (n == 2) return max(nums[1], nums[0]);
        if (n == 3) return max(nums[2], max(nums[1], nums[0]));
        
        v.assign(n, -1);
        int f1 = max(rec(nums, 1, 1), rec(nums, 2, 1));
        v.assign(n, -1);
        int f2 = rec(nums, 0, 0);
        
        return max(f1, f2);
    }
};
