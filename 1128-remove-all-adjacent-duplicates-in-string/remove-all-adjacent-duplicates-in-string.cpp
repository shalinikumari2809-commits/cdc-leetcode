class Solution {
public:
    string removeDuplicates(string str) {
        stack<char> s;

        for (int i = 0; i < str.length(); i++) {
            char ch = str[i];

            if (!s.empty() && s.top()==ch) {
                s.pop();
            } else {
                s.push(ch);
            }
        }

        // return  s;
        // Store answer from stack
        string ans = "";

        while (!s.empty()) {
            ans += s.top();
            s.pop();
        }

        // Reverse because stack gives characters in reverse order
        reverse(ans.begin(), ans.end());

        return ans;
    }
};