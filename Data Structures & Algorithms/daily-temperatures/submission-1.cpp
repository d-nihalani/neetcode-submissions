class Solution {
   public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        stack<pair<int, int>> st;
        vector<int> ans(temp.size(), 0);
        for (int i = temp.size()-1 ; i >=0 ; i--) {
            while (!st.empty() && temp[i] >= st.top().first) st.pop();

            if ( !st.empty() && temp[i] < st.top().first) {
                ans[i] = st.top().second - i;
            }
            st.push({temp[i], i});
        }return ans;
    }
};
