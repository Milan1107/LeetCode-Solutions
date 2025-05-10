class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.empty()) return 0;

        int pcnt = 1; 
        int ccnt = 1; 
        string res = ""; 
        res += s[0]; 

        for (int i = 1; i < s.length(); i++) {
            if (res.find(s[i]) != string::npos) {
                pcnt = max(pcnt, ccnt); 
                res = res.substr(res.find(s[i]) + 1);
                ccnt = res.length(); 
            }
            res += s[i];
            ccnt++; 
        }

        return max(pcnt, ccnt);
    }
};
