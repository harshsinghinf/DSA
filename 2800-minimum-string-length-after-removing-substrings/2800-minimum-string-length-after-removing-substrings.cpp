class Solution {
public:
    int minLength(string s) {
        stack<char> stk;
        for (char ch : s) {
            if (!stk.empty() && 
                ((stk.top() == 'A' && ch == 'B') || (stk.top() == 'C' && ch == 'D'))) {
                // Remove the valid pair
                stk.pop();
            } else {
                // Push current character onto the stack
                stk.push(ch);
            }
        }
        // The size of the stack represents the length of the resulting string
        return stk.size();
    }
};
