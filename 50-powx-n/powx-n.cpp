class Solution {
public:
    double myPow(double x, int n) {
        // Base case: anything to the power of 0 is 1
        if (n == 0) {
            return 1;
        }
        
        // Handle negative exponents
        if (n < 0) {
            // For INT_MIN, use -(n+1) to avoid overflow, then multiply by x later
            if (n == INT_MIN) {
                return 1 / (myPow(x, -(n + 1)) * x);
            }
            return 1 / myPow(x, -n);
        }
        
        // Efficient exponentiation by squaring
        double half = myPow(x, n / 2);
        if (n % 2 == 0) {
            return half * half; // If n is even
        } else {
            return half * half * x; // If n is odd
        }
    }
};
