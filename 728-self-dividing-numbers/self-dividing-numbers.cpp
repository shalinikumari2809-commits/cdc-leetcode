class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;

        // Check number in the given range
        for (int i = left; i <= right; i++) {

            // Copy current number
            int num = i;

            // Assume current number is self-dividing
            bool ok = true;

            // Traverse each digit 
            while (num > 0) {

                int digit = num % 10;

                // If digit is 0 OR current number is not divisible by digit,
                // then it is not a self-dividing number
                if (digit == 0 || i % digit != 0) {
                    ok = false;
                    break;
                }

                // Remove the last digit
                num /= 10;
            }

            // If all digits satisfy the condition, add to answer
            if (ok) {
                ans.push_back(i);
            }
        }

        // Return all self-dividing numbers
        return ans;
    }
};