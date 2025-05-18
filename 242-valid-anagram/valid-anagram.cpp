class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>smap;
        map<char,int>tmap;
        for(int i=0;i<s.size();i++){
            smap[s[i]]++;
        }
        for(int i=0;i<t.size();i++)
        {
            tmap[t[i]]++;
        }
        if(smap==tmap)
        {
            return true;
        }
        return false;
    }
};