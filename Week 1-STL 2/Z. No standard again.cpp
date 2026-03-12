#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

signed main()
{
    matador 
    int n,q; cin>>n>>q;
    vector<int>x(n),y(n),val(n);
    vector<int>qx1(q),qy1(q),qx2(q),qy2(q);

    for (int i = 0; i < n; i++) cin>>x[i]>>y[i]>>val[i];

    vector<int>cx = x,cy = y;

    for (int i = 0; i < q; i++)
    {
        cin>>qx1[i]>>qy1[i]>>qx2[i]>>qy2[i];
        cx.push_back(qx1[i]);
        cx.push_back(qx2[i]);
        cy.push_back(qy1[i]);
        cy.push_back(qy2[i]);
    }

    vector<vector<int>>pre(4001,vector<int>(4001));

    sort(cx.begin(),cx.end());
    sort(cy.begin(),cy.end());

    cx.erase(unique(cx.begin(),cx.end()),cx.end());
    cy.erase(unique(cy.begin(),cy.end()),cy.end());


    for (int i = 0; i < n; i++)
    {
        x[i] = lower_bound(cx.begin(),cx.end(),x[i]) - cx.begin() + 1;
        y[i] = lower_bound(cy.begin(),cy.end(),y[i]) - cy.begin() + 1;
        pre[x[i]][y[i]] += val[i];
    }

    for (int i = 1; i <= cx.size(); i++) for (int j = 1; j <= cy.size(); j++) pre[i][j] += pre[i][j-1] + pre[i-1][j] - pre[i-1][j-1];
    
    for (int i = 0; i < q; i++)
    {
        int x1 = lower_bound(cx.begin(),cx.end(),qx1[i]) - cx.begin() + 1;
        int x2 = lower_bound(cx.begin(),cx.end(),qx2[i]) - cx.begin() + 1;
        int y1 = lower_bound(cy.begin(),cy.end(),qy1[i]) - cy.begin() + 1;
        int y2 = lower_bound(cy.begin(),cy.end(),qy2[i]) - cy.begin() + 1;

        cout<<pre[x2][y2] - pre[x2][y1-1] - pre[x1-1][y2] + pre[x1-1][y1-1] << "\n";
    }
}


