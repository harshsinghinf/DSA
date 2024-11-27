// class Solution {
// public:
//     int trap(vector<int>& height) {
//         int i=0,j=0,n=height.size();
//         height.push_back(height[n-1]);
//         int vol = 0, tempvol=0;
//         for(i = 0;i<n;i++){
//             if(height[i]){
//                 break;
//             }
//         }
//         j = i+1;
//         while(i<n && j<=n){
//             if(height[j]<height[i]&&j<n){
//                 tempvol += (height[i]-height[j]);
//                 j++;
//                 cout<<tempvol;
//             }
//             if(height[j]>=height[i]){
//                 vol += tempvol;
//                 tempvol = 0;
//                 i = j;
//                 j = i+1;
//             }
//             else if(j>=n-1 && i<n-1){
//                 tempvol = 0;
//                 i+=1;
//                 j=i+1;
//             }
//             // cout<<vol;
//         }
//         return vol;
//     }
// };
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n <= 1) return 0;

        int left = 0, right = n - 1;
        int leftMax = 0, rightMax = 0;
        int water = 0;

        while (left <= right) {
            if (height[left] < height[right]) {
                if (height[left] >= leftMax) {
                    leftMax = height[left];
                } else {
                    water += leftMax - height[left];
                }
                left++;
            } else {
                if (height[right] >= rightMax) {
                    rightMax = height[right];
                } else {
                    water += rightMax - height[right];
                }
                right--;
            }
        }

        return water;
    }
};
