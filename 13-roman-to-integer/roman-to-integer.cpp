class Solution {
public:
    int num1,num2;
    int res = 0;
    int value(char ch)
    {
            if(ch=='I')
            {
                return 1;
            }
            else if(ch=='V'){
                return 5;
            }
            else if(ch=='X'){
                return 10;
            }
            else if(ch=='L'){
                return 50;
            }
            else if(ch=='C'){
                return 100;
            }
            else if(ch=='D'){
                return 500;
            }
            else if(ch=='M'){
                return 1000;
            }
        return -1;
           
    }
    int romanToInt(string s) {
        for(int i=0;i<s.size();i++)
        {
           num1 = value(s[i]);
           if(i+1<s.size()){
                num2 = value(s[i+1]);
                if(num1>=num2){
                    res += num1;
                }
                else{
                    res += (num2 - num1);
                    i++;
                }
           }
           else{
                res += num1;
           }
        }
        return res;
    }
};