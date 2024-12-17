class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int> stk; // to store indices of the histogram bars
        int maxArea = 0;
        for (int i = 0; i <= n; i++) {
            int currentHeight = (i == n) ? 0 : heights[i]; // Handle remaining bars by treating end as height 0
            // While the current bar is shorter than the top of the stack
            while (!stk.empty() && currentHeight < heights[stk.top()]) {
                int height = heights[stk.top()];
                stk.pop();
                // Calculate the width of the rectangle
                int width = stk.empty() ? i : (i - stk.top() - 1);
                maxArea = max(maxArea, height * width);
            }
            stk.push(i); // Push current index onto the stack
        }
        return maxArea;
    }
};
