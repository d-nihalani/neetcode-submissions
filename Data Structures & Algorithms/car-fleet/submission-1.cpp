class Solution {
   public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<float, int> > post(position.size());
        stack<float> st;
        for (int i = 0; i < position.size(); i++) {
            post[i].first = position[i];
            post[i].second = speed[i];
        }
        sort(post.begin(), post.end());

        for (int i = post.size() - 1; i >= 0; i--) {
            // calc time
            float d = (target - post[i].first);
            float t = d / post[i].second;
            if (!st.empty() && st.top() >= t) continue;
            st.push(t);
        }
        return st.size();
    }
};
