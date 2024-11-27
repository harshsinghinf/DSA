class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for(auto x: s){
            if(x=='(' || x=='{' || x=='['){
                stk.push(x);
            }
            else if(stk.empty()&&(x==']'||x==')'||x=='}')){
                return false;
            }
            else{
                if((stk.top()=='('&&x==')')||(stk.top()=='{'&&x=='}')||(stk.top()=='['&&x==']'))
                    stk.pop();
                else
                    return false;
            }
        }
        if(stk.empty())
            return true;
        else
            return false;
    }
};