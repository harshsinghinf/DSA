class Solution {
public:
    
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> q(piles.begin(),piles.end());
        
        while(k>0){
            int temp = q.top();
            q.pop();
            temp -= temp/2;
            q.push(temp); 
            k--;
        }
        int sum = 0;
        while(!q.empty()){
            sum+=q.top();
            q.pop();
        }
        return sum;
    }
};
static const int init = [](){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 0;
}();