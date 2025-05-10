class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        
        sort(s.begin(),s.end());
        sort(g.begin(),g.end());

        int l,r;
        l=r=0;
        while(l<s.size() && r<g.size())
        {
            if(g[r]<=s[l])
            {
                r++;
            }
            l++;
        }
        return r;
    }
};