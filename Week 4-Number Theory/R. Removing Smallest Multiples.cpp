#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

int solve (int n , string s) {
    
    vector<bool>visit(n + 1);
    int cost = 0;

    for (int i = 1; i <= n; i++)
    {
       if(s[i - 1] == '0') {

            for (int j = i; j <= n; j += i)
            {
                if (s[j - 1] == '1')  break;
                
                if (!visit[j]) {
                    visit[j] = true;
                    cost += i;
                }
            }        
       }
    }
    

    return cost;
    
}

signed main()
{
    matador 
   
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        string s; cin>>s;

        cout << solve(n , s) << "\n";
    }
    

   
}


