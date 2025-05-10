class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        string repeatedA = a; 
        int count = 1;

        while (repeatedA.size() < b.size()) {
            repeatedA += a;
            count++;
        }
        if (repeatedA.find(b) != string::npos) {
            return count;
        }

        repeatedA += a;
        count++;
        
        if (repeatedA.find(b) != string::npos) {
            return count;
        }
        return -1;
    }
};
