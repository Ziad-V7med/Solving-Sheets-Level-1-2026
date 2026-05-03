#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

string s;

int penalty (int i , int w1 , int r1 , int w2 , int r2) {

    if (w1 + r1 < w2 || w2 + r2 < w1 || i == 10)
        return i;

    bool first = (i % 2 == 0);

    if (s[i] == '1') {
        if (first) return penalty(i + 1 , w1 + 1 , r1 - 1 , w2 , r2);
        return penalty(i + 1 , w1 , r1 , w2 + 1 , r2 - 1);
    }

    else if (s[i] == '0') {
        if (first) return penalty(i + 1 , w1 , r1 - 1 , w2 , r2);
        return penalty(i + 1 , w1 , r1 , w2 , r2 - 1);
    }

    if (first) return min(penalty(i + 1 , w1 + 1 , r1 - 1 , w2 , r2) , penalty(i + 1 , w1 , r1 - 1 , w2 , r2));
        return min(penalty(i + 1 , w1 , r1 , w2 + 1 , r2 - 1) , penalty(i + 1 , w1 , r1 , w2 , r2 - 1));

    
}

signed main() {
    matador
    
    int t; cin >> t;
    while (t--)
    {
       cin >> s;

       cout << penalty(0 , 0 , 5 , 0 , 5) << '\n';
    }

}