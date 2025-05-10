class Solution {
public:
    stack<char>ss;
    bool isValid(string s) {
        ss.push(s[0]);
        for(int i=1;i<s.size();i++)
        {
            if(!ss.empty()){
                if(s[i]==')' && ss.top()=='('){
                    ss.pop();
                }else if(s[i]=='}' && ss.top()=='{'){
                    ss.pop();
                }else if(s[i]==']' && ss.top()=='['){
                    ss.pop();
                }else{
                    ss.push(s[i]);
                }
            }
            else{
                ss.push(s[i]);
            }
        }
        if(ss.empty())
        {
            return 1;
        }
        else{
            return 0;
        }
    }
};