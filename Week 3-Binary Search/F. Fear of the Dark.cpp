#include <bits/stdc++.h>
#define int long long
#define matador std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

bool can (int c1o,int c2o,int c1d,int c2d,int c1c2,double radious) {
    
    double square_radious = radious * radious;
    bool lantern1 = (c1o <= square_radious && c1d <= square_radious);
    bool lantern2 = (c2o <= square_radious && c2d <= square_radious);
    bool lantern_1_2 = (c1o <= square_radious || c2o <= square_radious) && (c1d <= square_radious || c2d <= square_radious) &&(c1c2 <= 4 * square_radious);  

    return lantern1 || lantern2 || lantern_1_2;

}

signed main()
{
    matador 
    int t; cin>>t;
    while (t--)
    {
        int dx,dy,ax,ay,bx,by; cin>>dx>>dy>>ax>>ay>>bx>>by;

        int c1o = ax * ax + ay * ay;
        int c2o = bx * bx + by * by;
        int c1d = (ax - dx) * (ax - dx) + (ay - dy) * (ay - dy);
        int c2d = (bx - dx) * (bx - dx) + (by - dy) * (by - dy);
        int c1c2 = (ax - bx) * (ax - bx) + (ay - by) * (ay - by);

        double l = 0,r = 1e12,ans = 0;
        for (int i = 1; i <= 100; i++)
        {
            double mid = (l + r) / 2;

            if (can(c1o,c2o,c1d,c2d,c1c2,mid)) {
                ans = mid;
                r = mid;
            }
            else {
                l = mid;
            }
        }
        cout << fixed << setprecision(10) << ans << "\n";
    }
    
}
