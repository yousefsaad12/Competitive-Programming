#include <bits/stdc++.h>
using namespace std;
#define MOD 1073741824
#define sz(v) ((int)((v).size()))
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
const int OO = (int)1e6;
////////////////////////// YOUSEF SAAD /////////////////////////
int dr[4]{ -1, 1, 0, 0};
int dc[4]{ 0, 0, 1, -1};
 
// Problem link = https://codeforces.com/contest/236/problem/B

ll div(ll num)
{
    ll count = 0;

    for(int i = 1; i <= sqrt(num); i++)
    {
        if(num % i == 0)
        {
            if(i == num / i) count++;

            else count += 2;
        }
    }

    return count;
}

void solve() 
{
    int a, b, c; cin >> a >> b >> c;
    
    ll ans = 0;
    unordered_map<int, int>mp;

    for(int i = 1; i <= a; i++)
        for(int j = 1; j <= b; j++)
            for(int k = 1; k <= c; k++) 
                mp[i * k * j]++;

    for(auto & it : mp)
        ans += (div(it.first) * it.second) % MOD;
   
   cout << ans << endl;
}
 
int main()
{   
    optimize();

    solve();
}