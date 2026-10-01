#include <bits/stdc++.h>
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

const int MAX = 32000;
vector<bool>IS_Prime(MAX + 1 , true);
vector<int>primes;
set<int>st;

void Sieve () {

    IS_Prime[0] = IS_Prime[1] = false;

    for (int i = 2; i <= MAX; i++)
    {
        if (IS_Prime[i]) {
            primes.push_back(i);
            for (int p = i * i; p <= MAX; p += i)
                 IS_Prime[p] = false;
        } 
    }

}

bool Prime_Factorization (int n) {
    
    for (int i = 0; i < primes.size(); i++)
    {
        
        if (n % primes[i] == 0) {
            if (st.count(primes[i])) return true;
            st.insert(primes[i]);
        }

        while (n % primes[i] == 0) n /= primes[i];
  
    }
    
    if (n != 1) {
         if (st.count(n)) return true;
         st.insert(n);
    }

    return false;
    
}

signed main()
{
    matador 
    Sieve();
    int t; cin>>t;
    while (t--)
    {
       int n; cin>>n; vector<int>v(n);
       for (int i = 0; i < n; i++) cin >> v[i];

       bool found = false;
       for (int i = 0; i < n; i++) {

            if (Prime_Factorization(v[i])) {
                cout << "YES\n"; found = true; break;
            }
            
       }
       
       if (!found) cout << "NO\n";
       
       st.clear();
    
    }

}

