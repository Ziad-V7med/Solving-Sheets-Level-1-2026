#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

void solve_with_2_pointer () {

    int n,sum1{},sum3{},ans{}; cin>>n; vector<int>v(n);
    for (int i = 0; i < n; i++) cin>>v[i];
    int l = 0,r = n-1;
    while (l <= r)
    {
        if (sum1 < sum3) sum1 += v[l++];
        else if (sum1 > sum3) sum3 += v[r--];
        if (sum1 == sum3) {
            ans = sum1; sum1 += v[l++];
        }
    }
    cout<<ans<<"\n";
}

void solve_with_STL2 () {

    int n; cin>>n; vector<int>v(n+1),pre(n+2),suf(n+2);
    set<int>st1,st2;

    for (int i = 1; i <= n; i++) {
       cin>>v[i]; pre[i] = pre[i-1] + v[i];
       st1.insert(pre[i]);
    }

    for (int i = n; i >= 1; i--) {
       suf[i] = suf[i+1] + v[i];
       st2.insert(suf[i]); 
    }
     
    int total_sum = suf[1];

    for (auto it = st1.rbegin(); it != st1.rend(); it++)
    {
        int num = *it;
        if (st2.find(num) != st2.end()) {
            if (2 * num <= total_sum) {
                cout << num; return;
            }
        }
    }
    cout << 0;
}

signed main()
{
    matador
    // the two solution is accepted (solve_with_STL2 or solve_with_2_pointer)
    solve_with_STL2();
}