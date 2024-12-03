class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
        for (const string& x : tokens) {
            if (x.size() > 1 || isdigit(x[0]) || (x[0] == '-' && x.size() > 1 && isdigit(x[1]))) {
                // Handle numbers (including negatives)
                stk.push(stoi(x));
            } else if (x == "+" || x == "-" || x == "*" || x == "/") {
                // Ensure there are at least two elements in the stack
                if (stk.size() < 2) {
                    throw runtime_error("Invalid RPN expression: insufficient operands.");
                }
                int val2 = stk.top(); stk.pop();
                int val1 = stk.top(); stk.pop();
                
                int val;
                if (x == "+") val = val1 + val2;
                else if (x == "-") val = val1 - val2;
                else if (x == "*") val = val1 * val2;
                else if (x == "/") val = val1 / val2;
                
                stk.push(val);
            } else {
                throw runtime_error("Invalid RPN expression: unknown token.");
            }
        }
        // Ensure only one result remains
        if (stk.size() != 1) {
            throw runtime_error("Invalid RPN expression: too many operands.");
        }
        return stk.top();
    }
};
