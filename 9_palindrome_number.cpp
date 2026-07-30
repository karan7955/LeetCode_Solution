class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        long long result = 0;
        while(temp > 0){
            int rem = temp % 10;
            result = result * 10 + rem;
            temp /= 10;
        }
        if(result == x)
            return true;
        else
            return false;
        
    }
};