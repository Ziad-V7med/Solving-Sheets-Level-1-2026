#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

bool can (vector<int>ingret,vector<int>price,vector<int>freq,int mid,int rubles) {
    
    for (int i = 0; i < 3; i++) {

        if (mid * freq[i] > ingret[i]) {
            int need = mid * freq[i] - ingret[i];
            if (need * price[i] > rubles) return false;
            else rubles -= need * price[i];
        }

    }
    return true;
    
}

signed main()
{
    matador 
    string Hamburger; cin >> Hamburger;
    vector<int>ingretiants(3),price(3),freq(3);
    
    for (int i = 0; i < 3; i++) cin >> ingretiants[i];
    for (int i = 0; i < 3; i++) cin >> price[i];
    
    int rubles; cin >> rubles;
    
    for (int i = 0; i < Hamburger.size(); i++)
    {
        if (Hamburger[i] == 'B') freq[0]++;
        else if (Hamburger[i] == 'S') freq[1]++;
        else freq[2]++;
    }
    
    int l = 0,r = 1e12 + 100,ans = 0;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (can(ingretiants,price,freq,mid,rubles)) {
            ans = mid;
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }

    cout << ans << "\n";
    
}

 