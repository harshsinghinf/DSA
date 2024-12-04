class Solution {
public:
    vector<string> strvec;
    string stk;
    void rec(int Ocount,int Ccount, int n){
        if(Ocount == Ccount && Ocount == n && n == Ccount){
            strvec.push_back(stk);
            return;
        }
        if(Ocount<n){
            stk.append("(");
            rec(Ocount+1,Ccount,n);
            stk.pop_back();
        }
        if(Ccount<Ocount){
            stk.append(")");
            rec(Ocount,Ccount+1,n);
            stk.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        rec(0,0,n);
        return strvec;
    }
};