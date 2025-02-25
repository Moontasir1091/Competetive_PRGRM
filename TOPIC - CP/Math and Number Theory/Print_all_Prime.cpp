// Sieve of Eratosthenes

class Solution {
    public:
        vector<int> sieveOfEratosthenes(int N) {
            vector<bool> is_prime(N + 1, 1); // Prime checking array
            vector<int> primes; // To store prime numbers
    
            is_prime[0] = is_prime[1] = false; // 0 and 1 are not primes
    
            for (int i = 2; i * i <= N; i++) {
                if (is_prime[i]) {
                    for (int j = i * i; j <= N; j += i) {
                        is_prime[j] = false; // Mark all multiples of i as non-prime
                    }
                }
            }
    
            // Collect all prime numbers
            for (int i = 2; i <= N; i++) {
                if (is_prime[i]) {
                    primes.push_back(i);
                }
            }
    
            return primes;
        }
    };
    


