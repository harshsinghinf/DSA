class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int count=0;
        int m=INT_MAX; 
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                m = min(m,i);
                if(m!=i&&k>count) return false;
                count = 0;
            }
            else 
                count++;
        }
        return true;
    }
};