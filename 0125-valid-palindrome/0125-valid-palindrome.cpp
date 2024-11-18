class Solution {
public:
    bool isPalindrome(string s) {
        if(s.empty()) return true;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for(auto i=s.begin();i<s.end();i++){
            //if(97<=int(*i) && int(*i)<=122){
            if(isalnum(*i)){
                continue;
            }
            //else if(*i == ' '){ s.erase(i); i--;}
            else{
                s.erase(i);
                i--;
            }
        }
        string revs = s;
        reverse(revs.begin(),revs.end());
        cout<<revs<<endl<<s<<endl;
        return (s==revs);
    }
};