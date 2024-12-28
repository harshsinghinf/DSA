class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;
            
            // If the middle element is less than the rightmost element,
            // the minimum must be in the left half (including mid).
            if (nums[mid] <= nums[high]) {
                high = mid;
            }
            // Otherwise, the minimum is in the right half (excluding mid).
            else {
                low = mid + 1;
            }
        }

        // At the end of the loop, low == high, pointing to the minimum element.
        return nums[low];
    }
};
