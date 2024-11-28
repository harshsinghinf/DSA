class MinStack {
public:
    vector<int> stk;       // Stack for storing values
    vector<int> minStk;    // Auxiliary stack for minimum values

    MinStack() { 
        // Constructor initializes empty stacks
    }
    
    void push(int val) {
        stk.push_back(val);  // Add the value to the main stack
        
        // Maintain the minimum stack
        if (minStk.empty() || val <= minStk.back()) {
            minStk.push_back(val);
        }
    }
    
    void pop() {
        if (stk.empty()) return; // Safety check
        if (stk.back() == minStk.back()) {
            minStk.pop_back(); // Remove from min stack if it's the current minimum
        }
        stk.pop_back(); // Remove from main stack
    }
    
    int top() {
        if (stk.empty()) return -1; // Return -1 or handle empty stack case
        return stk.back();          // Return the top element
    }
    
    int getMin() {
        if (minStk.empty()) return -1; // Return -1 or handle empty case
        return minStk.back();          // Return the current minimum
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
