/*بسم الله الرحمن الرحيم */
#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define sz(v) ((int)((v).size()))
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
const int OO = (int)1e6;
////////////////////////// YOUSEF SAAD /////////////////////////
int dr[4]{ -1, 1, 0, 0};
int dc[4]{ 0, 0, 1, -1};
 
// Problem link = 

void solve() 
{   
   
    int n; cin >> n;

    ll ans = 1, counter = 1, mod = 1e9 + 7;

    while(n--) ans = ((ans % mod) * (27 % mod)) % mod,  counter = ((counter % mod) * (7 % mod)) % mod;
       
        
    cout << (((ans % mod) - (counter % mod)) + mod) % mod << endl;

}
 
int main()
{   
    optimize();

    solve();
}