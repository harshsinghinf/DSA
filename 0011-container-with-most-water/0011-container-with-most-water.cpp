class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarr=0,i=0,n=height.size();
        int j=n-1;
        while(i<j){
            maxarr = max(maxarr,((height[i]<height[j]?height[i]:height[j])*(j-i)));
            if(height[i]<height[j])
                i++;
            else
                j--;
        }
        return maxarr;
    }
};