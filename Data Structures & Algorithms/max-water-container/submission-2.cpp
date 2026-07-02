class Solution {
   public:
    int maxArea(vector<int>& heights) {
        int r = heights.size() - 1;
        int a = 0, ans = 0;
        int l = 0;
        while (l < r) {
            int len = r - l;
            int h = min(heights[l], heights[r]);
            a = len * h;
            ans = max(ans, a);
            if (heights[l] > heights[r])
                r--;
            else
                l++;
        }
        return ans;
    }
};
