class Solution {
public:
    bool isPalindrome(int x) {
        long long m = 0;
        if(x < 0){
            return false;

        }
        int n = x;

        while (x != 0) {
            
            int pop = x % 10;
            x /= 10;
            
            
            m = m * 10 + pop;
            
            
            
        }
        
        if(n == m){
            return true;

        }
        else{
            return false;
        }


    }
};