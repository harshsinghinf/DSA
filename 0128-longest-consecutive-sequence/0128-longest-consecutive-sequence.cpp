class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxcount=0,count=0;
        if(nums.size()==0) return 0;
        for(int i=0;i<nums.size()-1;i++){
            if((nums[i+1]-nums[i])==1){
                count++;
            }
            else if((nums[i+1]-nums[i]) > 1){
                maxcount = maxcount>count?maxcount:count+1;
                count=0;
            }
        }
        maxcount = maxcount>count?maxcount:count+1;
        return maxcount;
    }
};