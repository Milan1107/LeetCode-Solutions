class Solution {
public:
    int strStr(string haystack, string needle) {
        int n1 = haystack.size();
        int n2 = needle.size();

        if (n2 == 0) return 0;

        if (n2 > n1) return -1;

        for (int i = 0; i <= n1 - n2; i++) {
            if (haystack.substr(i, n2) == needle) {
                return i; 
            }
        }

        return -1; 
    }
};
