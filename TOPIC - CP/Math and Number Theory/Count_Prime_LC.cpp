// https://leetcode.com/problems/count-primes/description/
// COUNT PRIME


class Solution {
    public:
        int countPrimes(int n) {
            if (n <= 2) return 0;
    
            vector<bool> is_Prime(n, 1);
            is_Prime[0] = is_Prime[1] = false;
    
            for (int i = 2 ;  i * i < n ; ++i) {
                if (is_Prime[i]) {
                    for (int j = i * i; j < n; j += i) {
                        is_Prime[j] = false;
                    }
                }
            }
    
            return count(is_Prime.begin(), is_Prime.end(), 1);
        }
    };
    