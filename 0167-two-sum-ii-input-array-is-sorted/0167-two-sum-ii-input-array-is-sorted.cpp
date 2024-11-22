class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
    int left = 0, right = numbers.size() - 1;
    
    while (left < right) {
        int sum = numbers[left] + numbers[right];
        
        if (sum == target) {
            return {left + 1, right + 1}; // 1-based indices
        } else if (sum < target) {
            left++; // Move the left pointer right to increase the sum
        } else {
            right--; // Move the right pointer left to decrease the sum
        }
    }
    
    return {-1, -1}; // Pair not found
}
};