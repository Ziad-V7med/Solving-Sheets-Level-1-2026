#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

int n; 

int LOG (int num) {

    if (num == 1) return 0;

    return 1 + LOG(num / 2);
    
}

signed main()
{
    matador 
    cin >> n;
    
    cout << LOG(n);

}
