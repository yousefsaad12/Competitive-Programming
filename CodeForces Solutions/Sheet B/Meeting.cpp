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
 
// Problem link = https://codeforces.com/contest/144/problem/B


void solve() 
{
    int xa, ya, xb, yb; cin >> xa >> ya >> xb >> yb;

    set<pair<int,int>>st;
    set<pair<int,int>>ans;
    int stx = min(xa, xb), endx = max(xa, xb);
    int sty = min(ya, yb), endy = max(ya, yb);
    for(int i = stx; i <= endx; i++) st.insert({i, ya}), st.insert({i, yb});

    for(int i = sty; i <= endy; i++) st.insert({xa, i}), st.insert({xb, i});

  
    
    int n; cin >> n;

    for(int i = 0; i < n; i++)
    {
        int nx, ny, r; cin >> nx >> ny >> r;

        for(auto points : st)
        {
            double dis = sqrt(pow(nx - points.first, 2) + pow(ny - points.second, 2));
        
            if(dis <= r && ans.count(points) <= 0) ans.insert({points.first, points.second});
            
            
        }
    }

 
    cout << st.size() - ans.size() << endl; 
}
 
int main()
{   
    optimize();

    solve();
}