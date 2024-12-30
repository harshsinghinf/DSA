class Solution {
public:
    int maxOperations(vector<int>& nums) {
        int n = nums.size();
        int res=0;
        int score = nums[0]+nums[1];
        if(nums.size()==2) return res+1;
        while(nums.size()>1 && nums[0]+nums[1]==score){
            res+=1;
            nums.erase(nums.begin()+0,nums.begin()+2);
        }
        return res;
    }
};