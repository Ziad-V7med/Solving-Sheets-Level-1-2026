#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

int n;
int fib (int num) {

    if (num == 1) return 0;
    else if (num == 2) return 1;

    return fib(num - 1) + fib(num - 2);
  
}

signed main()
{
    matador 
    cin >> n;
    cout << fib(n);
}
