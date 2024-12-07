#include <bits/stdc++.h>
#define sz(v) ((int)((v).size()))
#define MOD 1000000007
using namespace std;
using ll = long long;
const int OO = (int)1e6;
////////////////////////// YOUSEF SAAD /////////////////////////
int dr[4]{ -1, 1, 0, 0};
int dc[4]{ 0, 0, 1, -1};
 
// Problem link = https://codeforces.com/contest/376/problem/B


// bool valid(int r, int n)
// {   
//     if(r >= n || r < 0)
//         return false;
 
//     return true;
// }

// int fix(int c)
// {
//     if(c >= m) return 0;

//     if(c < 0) return m - 1;

//     return c;
// }

// void dfs(int r, int c, vector<vector<char>>& grid, vector<vector<bool>> &visited)
// {
//     if(!valid(r, n) || grid[r][c] != l || visited[r][c]) return;

//     visited[r][c] = true;

//     cnt++;

//     for(int i = 0; i < 4; i++) dfs(r + dr[i], fix(c + dc[i]), grid, visited);

// }




void solve() 
{
    int n, m; cin >> n >> m;

    int dept[n + 1]{0}, own[n + 1]{0};
    
    for(int i = 0; i < m; i++)
    {
        int o, d, c; cin >> o >> d >> c;

        dept[d] += c;
        own[o] += c;
    }

    int sum = 0;

    for(int i = 1; i <= n; i++) if(dept[i] < own[i]) sum += (own[i] - dept[i]);

    cout << sum << endl;
}
 
int main()
{   
    std::ios_base::sync_with_stdio(false); cin.tie(nullptr);

    solve();
}