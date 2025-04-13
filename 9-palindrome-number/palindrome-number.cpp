class Solution {
public:
    bool isPalindrome(int x) {
        // NAIVE

        // string original = to_string(x);
        // string reversed = string(original.begin(), original.end());
        // return original == reversed;

        // OPTIMAL

        if (x < 0) 
            return false;

        int original = x;
        long reversed = 0;
        while (x != 0) {
            reversed = reversed * 10 + x % 10;
            x /= 10;
        }
        return original == reversed;
    }
};