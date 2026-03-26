#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

signed main()
{
    matador 
    int n,p,submit; cin>>n>>p>>submit;
    vector<vector<pair<int, bool>>> grid(n + 1, vector<pair<int, bool>>(p + 1));

    while (submit--)
    {
        int n_id,p_id; cin>>n_id>>p_id;
        string s; cin>>s;
        grid[n_id][p_id].first += (s != "AC");
        grid[n_id][p_id].second = (s == "AC");
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= p; j++)
        {
            if (grid[i][j].second) grid[i][j].first = grid[i][j].first + grid[i-1][j].first + grid[i][j-1].first - grid[i-1][j-1].first;
            else grid[i][j].first = grid[i-1][j].first + grid[i][j-1].first - grid[i-1][j-1].first;
        }
    }
    

    int q; cin>>q;
    while (q--)
    {
        int c1,p1,c2,p2; cin>>c1>>p1>>c2>>p2;
        
        cout << grid[c2][p2].first - grid[c1-1][p2].first - grid[c2][p1-1].first + grid[c1-1][p1-1].first << "\n";
    }
    
    
}

