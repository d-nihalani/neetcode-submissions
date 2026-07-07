class Solution {
   public:
    int evalRPN(vector<string>& tokens) {
        int ans = 0;
        stack<int> st;

        for (string s : tokens) {
            if (s!="+" && s!="-" && s!="/" && s!="*")
                st.push(stoi(s));
            else {
                int a = st.top();
                st.pop();
                if (s == "+") {
                    ans = a + st.top();
                    st.pop();

                } else if (s == "/") {
                    ans = st.top() / a;
                    cout << ans;
                    st.pop();

                } else if (s == "*") {
                    ans = st.top() * a;
                    st.pop();

                } else if (s == "-") {
                    ans = st.top() - a;
                    st.pop();
                }
                st.push(ans);
            }
        }
        return st.top();
    }
};
