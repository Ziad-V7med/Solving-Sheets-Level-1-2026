#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

int n;
void print (int i) {

    if (i == n + 1) return;
    cout << i << "\n";
    print(i + 1);
}

signed main()
{
    matador 
    cin >> n;
    print(1);
}
