#include <bits/stdc++.h>
using namespace std;

const int N = 1e7 + 10;  // 1e7 + 10 পর্যন্ত প্রাইম বের করবো
vector<bool> is_prime(N, 1);
unordered_set<long long> t_primes;

void sieve_Algo_First_time() {
    is_prime[0] = is_prime[1] = false; // 0 এবং 1 প্রাইম না
    for (long long i = 2; i * i <= N; ++i) {
        if (is_prime[i]) {
            for (long long j = i * i; j <= N; j += i)
                is_prime[j] = false;
        }
    }
    
    // প্রাইম সংখ্যা গুলোর বর্গ সংরক্ষণ করা হচ্ছে
    for (long long i = 2; i <= N; ++i) {
        if (is_prime[i]) {
            t_primes.insert(i * i);  // প্রাইম নাম্বারের স্কয়ার
        }
    }
}

int main() {
    sieve_Algo_First_time(); // Sieve রান করবো একবার
    int n;
    cin >> n;
    
    while (n--) {
        long long x;
        cin >> x;
        if (t_primes.count(x))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    
    return 0;
}

/*আমাদের এমন সংখ্যা খুঁজতে হবে যা ঠিক তিনটি ভিন্ন পজিটিভ বিভাজক (divisors) রাখে।

আমরা জানি,

একটি প্রাইম সংখ্যা 
𝑝
p এর ঠিক দুটি বিভাজক থাকে: 
1
1 এবং 
𝑝
p।
𝑝
2
p 
2
  (যেখানে 
𝑝
p একটি প্রাইম সংখ্যা) এর ঠিক তিনটি বিভাজক থাকে:
1
1
𝑝
p
𝑝
2
p 
2
 
তাই, একটি T-Prime সংখ্যা অবশ্যই কোনো প্রাইম সংখ্যার বর্গ (square of a prime number) হতে হবে।*/