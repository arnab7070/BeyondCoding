#include <bits/stdc++.h>
using namespace std;

// Compute all primes up to sqrt(n) using the basic Sieve of Eratosthenes
vector<int> sieve(int n)
{
    vector<bool> is_prime(n + 1, true);
    vector<int> primes;

    for (int i = 2; i <= n; i++)
    {
        if (is_prime[i])
        {
            primes.push_back(i);
            for (int j = 1 * i * i; j <= n; j += i)
            {
                is_prime[j] = false;
            }
        }
    }

    return primes;
}

// Segment sieving: Computes primes in the range [L, R]
vector<int> segmentSieve(int L, int R)
{
    int sqrtn = sqrt(R);
    vector<int> primes = sieve(sqrtn);

    vector<bool> is_prime(R - L + 1, true);
    vector<int> segment_primes;

    for (size_t i = 0; i < primes.size(); i++)
    {
        int start = max(1 * primes[i] * primes[i], (L + primes[i] - 1) / primes[i] * primes[i]);
        for (int  j = start; j <= R; j += primes[i])
        {
            is_prime[j - L] = false;
        }
    }

    for (int i = 0; i < R - L + 1; i++)
    {
        if (is_prime[i] && i + L >= 2)
        {
            segment_primes.push_back(i + L);
        }
    }

    return segment_primes;
}

int main()
{
    string line;
    getline(cin, line);
    istringstream iss(line);
    vector<int> arr;
    int num;
    while (iss >> num)
    {
        arr.push_back(num);
    }
    // for storing all primes
    vector<int> primes = segmentSieve(1, 1e5);
    int q = *min_element(arr.begin(), arr.end());
    for (int x : primes)
    {
        bool flag = true;
        for (size_t i = 0; i < arr.size(); i++)
        {
            if (arr[i] != q && x % arr[i] != q)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            if (x==q){
                continue;
            } 
            cout << x;
            return 0;
        }
    }
    cout << "None";
    return 0;
}