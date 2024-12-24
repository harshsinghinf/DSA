class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int low=0, high=n-1;
        int i=0,j=m-1;
        while(i<=j){
            int mid = (i+j)/2;
            if(target>=matrix[mid][low]&&target<=matrix[mid][high]){
                while(low<=high){
                    int rowMid = (low+high)/2;
                    if(target==matrix[mid][rowMid]){
                        return true;
                    }
                    else if(target>matrix[mid][rowMid]){
                        low = rowMid+1;
                    }
                    else{
                        high = rowMid-1;
                    }
                }
            }
            else if(target<matrix[mid][low]){
                j = mid-1;
            }
            else
                i = mid+1;
        }
        return false;
    }
};