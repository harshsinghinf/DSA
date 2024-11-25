class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        string str1,str2;
        long long conc = 0;
        while(!nums.empty()){
            int n=nums.size(),i=0,j=n-1;
            if(n==1){
                conc+=(long long)nums[0];
                nums.clear();
                break;
            }
            str1=to_string(nums[i]);
            str2=to_string(nums[j]);
            nums.erase(nums.begin()+i);
            nums.erase(nums.begin()+j);
            string str3 = str1+str2;
            conc+= stoll(str3);
        }
        return conc;
    }
};