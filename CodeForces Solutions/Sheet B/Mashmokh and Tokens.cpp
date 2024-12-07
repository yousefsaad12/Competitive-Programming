/*بسم الله الرحمن الرحيم */
#include <bits/stdc++.h>
//#include "DSU.H"
using namespace std;
#define MOD 1000000007
#define sz(v) ((int)((v).size()))
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
const int OO = (int)1e6;

typedef vector<int>       vi;
////////////////////////// YOUSEF SAAD /////////////////////////
int dr[4]{ -1, 1, 0, 0};
int dc[4]{ 0, 0, 1, -1};
 
// Problem link = https://codeforces.com/contest/415/problem/B

struct comp
{
    
    bool operator()(const pair<int, int>& p1,
                    const pair<int, int>& p2)
    {
        // new definition
        if (p1.first == p2.first) {
            return p1.second > p2.second;
        }
        return p1.first < p2.first;
    }
    
};


void solve() 
{   
    ll n, a, b; cin >> n >> a >> b;

    vector<ll>ans;

    for(int i = 0; i < n; i++)
    {
        ll x; cin >> x;

        ll remainder = (a * x) % b;

        if(remainder == 0) ans.push_back(remainder);

        else ans.push_back(remainder / a);
    }

    for(auto & it : ans) cout << it << " ";

    cout << endl;
}

 
int main()
{   
    optimize();
    solve();
}