class Solution {
public:
    bool isBalanced(string num) {
        int n = num.size();
        int evenSum = 0, oddSum = 0;
        for(int i = 0;i<n;i++){
            if(i==0 || i%2==0) evenSum += num[i]-'0';
            if(i==1 || i%2!=0) oddSum += num[i]-'0';
        }
        if(evenSum == oddSum) return true;
        return false;
    }
};