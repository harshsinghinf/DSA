class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end()); // Sort the array
        
        int n = nums.size();
        for (int i = 0; i < n - 2; ++i) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                // Skip duplicate values for the first element
                continue;
            }
            
            int j = i + 1, k = n - 1;
            int target = -nums[i];
            
            while (j < k) {
                int sum = nums[j] + nums[k];
                if (sum == target) {
                    res.push_back({nums[i], nums[j], nums[k]});
                    
                    // Skip duplicate values for the second and third elements
                    while (j < k && nums[j] == nums[j + 1]) ++j;
                    while (j < k && nums[k] == nums[k - 1]) --k;
                    
                    ++j; --k;
                } else if (sum < target) {
                    ++j; // Increase the sum
                } else {
                    --k; // Decrease the sum
                }
            }
        }
        
        return res;
    }
};
