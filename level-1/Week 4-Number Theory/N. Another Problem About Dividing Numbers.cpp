#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

const int MAX = 31625;
vector<int>primes;

void sieve () {

    vector<bool>isPrime(MAX + 1,true);

    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= MAX; i++)
    {
        if (isPrime[i]) 
            for (int p = i * i; p <= MAX; p += i) isPrime[p] = false;    
    }

    for (int i = 2; i <= MAX; i++) if (isPrime[i]) primes.push_back(i);
    
}

int max_K (int num) {

    int cnt = 0;

    for (int i = 0; i < primes.size(); i++)
    {
        while (num % primes[i] == 0)
        {
            cnt++;
            num /= primes[i];
        }
    }

    if (num != 1) cnt++;

    return cnt; 
}

int min_K (int a,int b) {

    if (a == b) return 0;  
    if (a % b == 0 || b % a == 0) return 1;
    return 2;
    
}

signed main()
{
    matador 
    sieve();
    int t; cin>>t;
    while (t--)
    {
       int a,b,k; cin>>a>>b>>k;

        if (k == 1 && a == b) {
            cout << "NO\n";
            continue;
        }

        if (k <= max_K(a) + max_K(b) && k >= min_K(a,b))
            cout << "YES\n";
        
        else 
            cout << "NO\n";
    }
    
}


