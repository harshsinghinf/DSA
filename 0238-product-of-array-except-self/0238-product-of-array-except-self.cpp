class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1,zcount=0;
        int n = nums.size();
        bool flag = true; //flag -> no zero in the list
        vector<int> res(n,0);
        for(vector<int>::iterator it=nums.begin();it<nums.end();it++){
            if(*it == 0){
                zcount++;
                flag=false;
                continue;
            }
            else
                prod = prod * (*it);
        }
        for(int it=0;it<n;it++){
            if(zcount>1)
                return res;
            if(nums[it]==0){
                res[it]=prod;
            }
            else if(nums[it]!=0 && flag!=true){
                res[it]=0;
            }
            else{
                res[it]=prod/(nums[it]);
            }
        }
        return res;
    }
};