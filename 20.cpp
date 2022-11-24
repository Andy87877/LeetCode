// https://leetcode.com/problems/valid-parentheses/
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (auto i: s) {
            if (i == '(' || i == '{' || i == '[') {
                st.push(i);
            } else if (i == ')' && !st.empty()) {
                if (st.top() != '(') {
                    return false;
                }
                st.pop();
            } else if (i == '}' && !st.empty()) {
                if (st.top() != '{') {
                    return false;
                }
                st.pop();
            } else if (i == ']' && !st.empty()) {
                if (st.top() != '[') {
                    return false;
                }
                st.pop();
            } else {
                return false;
            }
        }
        return (st.empty());
    }
};