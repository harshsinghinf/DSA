class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> res(n, 0); 
        stack<int> stk; // stack to store indices of temperatures
        
        for (int i = 0; i < n; i++) {
            // Check if the current temperature is warmer than the temperature at the indices in the stack
            while (!stk.empty() && temperatures[i] > temperatures[stk.top()]) {
                int idx = stk.top();
                stk.pop();
                res[idx] = i - idx; // calculate the number of days to wait
            }
            stk.push(i); // push the current index onto the stack
        }
        
        return res;
    }
};
