class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = *max_element(piles.begin(),piles.end());
        int result = high;
        while(low <= high){
            int mid = low + (high - low)/2;
            long int totalHours = 0;

            for(auto x: piles){
                totalHours += ceil((double)x/mid);
            }

            if(totalHours <= h){
                result = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return result;
    }
};