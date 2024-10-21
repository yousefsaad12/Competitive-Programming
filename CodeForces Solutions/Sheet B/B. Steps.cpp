#include <bits/stdc++.h>
#include <utility>
#define sz(v) ((int)((v).size()))
#define MOD 1000000007
using namespace std;
using ll = long long;
const int OO = (int)1e6;
////////////////////////// YOUSEF SAAD /////////////////////////
//int dr[8]{ -1, 1, 0, 0, -1, -1, 1, 1};
//int dc[8]{ 0, 0, 1, -1, 1, -1, -1, 1};
 
// Problem link = https://codeforces.com/contest/152/problem/B

// bool valid(int r, int c, int n, int m)
// {
//     if(r >= n || r < 0 || c >= m || c < 0)
//         return false;
 
//     return true;
// }

bool helper(ll x, ll y, ll n, ll m)
{
   
    return x <= n && y <= m && x >= 1 && y >= 1;
}


int main() {

    std::ios_base::sync_with_stdio(false); cin.tie(0);

    ll n, m; cin >> n >> m;

    ll counter = 0;

    ll ix, iy; cin >> ix >> iy;

    int q; cin >> q;

    while(q--)
    {
        ll dx, dy; cin >> dx >> dy;

        ll l = 0; ll r = 1e9 + 9;
        ll ans = 0;

        while(l <= r)
        {
            ll mid = l + (r - l) / 2;

            if(helper(ix + (mid * dx), iy + (mid * dy), n, m))
            {
                l = mid + 1;
                ans = mid;
            }
                
            else r = mid - 1;
        }

        ix += (dx * ans);
        iy += (dy * ans);

        counter += ans;
    }

    cout << counter << endl;

    return 0;
 
}