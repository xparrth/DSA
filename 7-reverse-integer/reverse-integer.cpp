#include <climits> 

class Solution {
public:
    int reverse(int x) {
        long long m = 0;
        
        while (x != 0) {
            
            int pop = x % 10;
            x /= 10;
            
            
            m = m * 10 + pop;
            
            
            if (m > INT_MAX || m < INT_MIN) {
                return 0;
            }
        }
        
        return (int)m;
    }
};