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
        if (n == 1) return nums[0];
        
        v.assign(n, -1);
        int f1 = max(rec(nums, 1, 1), rec(nums, 2, 1)); // can use last if start from 1/2
        v.assign(n, -1);
        int f2 = rec(nums, 0, 0); //cannot use last if start from first
        
        return max(f1, f2);
    }
};
