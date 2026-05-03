#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

int n; 

void rec (int num) {

    if (num == 0) return;

    rec (num / 10);

    cout << num % 10 << " ";
}

signed main()
{
    matador
    int t; cin >> t;
    while (t--)
    {
        cin >> n;
        
        if (n == 0) cout << "0\n";
        else  {
            rec(n);
            cout << '\n';
        }
    }
     
}
