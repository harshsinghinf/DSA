class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int n = patterns.size(), count = 0;
        for(int i=0;i<n;i++){
            string str = patterns[i];
            size_t res = word.find(str);
            if(res!=string::npos)
                count++;
        }
        return count;
    }
};