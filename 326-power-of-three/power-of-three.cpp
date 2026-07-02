class Solution {
public:
    bool isPowerOfThree(int n){

        if (n <= 0)
            return false;
        
        while (n % 3 == 0) {
            n /= 3;
        }

        //n == 1 tabhi pahunchta hai jab number actually power of 3 ho
        if (n == 1)
            return true;
        else
            return false;
    }
};  