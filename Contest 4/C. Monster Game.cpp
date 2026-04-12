#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

signed main()
{
    matador 
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n; vector<int>sword(n),monster(n);

        for (int i = 0; i < n; i++) cin >> sword[i];
        for (int i = 0; i < n; i++) {
            cin >> monster[i];
            if (i >= 1) monster[i] += monster[i-1];
        }

        sort(sword.begin(),sword.end());

        int max_score = 0;
        for (int i = 0; i < n; i++)
        {
            int num_sword = n - i;
            int level = upper_bound(monster.begin(),monster.end(),num_sword) - monster.begin();
            
            max_score = max(max_score,sword[i] * level);
        }

        cout << max_score << "\n";
    }
    
}
