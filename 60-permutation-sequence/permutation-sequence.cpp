class Solution {
public:
    string getPermutation(int n, int k) {
        string ss;
        
        // Step 1: Generate string with numbers from 1 to n
        for(int i = 1; i <= n; i++) {
            ss.push_back('0' + i);
        }
        
        // Step 2: Calculate factorial values (used to determine positions)
        vector<int> factorial(n, 1);
        for(int i = 1; i < n; i++) {
            factorial[i] = factorial[i - 1] * i;
        }
        
        // Step 3: Get k-th permutation using factorial logic
        k--;  // Convert to 0-based index
        string result;
        for(int i = n; i > 0; i--) {
            int index = k / factorial[i - 1];  // Determine which character to pick
            result.push_back(ss[index]);      // Add character to the result
            ss.erase(ss.begin() + index);     // Remove that character from list
            k %= factorial[i - 1];            // Update k for the next position
        }
        
        return result;
    }
};
