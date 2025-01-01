class NumArray {
public:
    vector<int> nums;
    NumArray(vector<int>& nums) {
        this->nums = nums;
    }
    int sumRange(int left, int right) {
        int sum = 0;
        int n = right-left+1;
        while(left<right){
            sum+=nums[left];
            sum+=nums[right];
            left+=1;
            right-=1;
        }
        if(n%2!=0){
            sum+=nums[right];
        }
        return sum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */