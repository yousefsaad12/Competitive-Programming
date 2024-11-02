#include <bits/stdc++.h>
#define sz(v) ((int)((v).size()))
#define MOD 1000000007
using namespace std;
using ll = long long;
const int OO = (int)1e6;
////////////////////////// YOUSEF SAAD /////////////////////////
int dr[4]{ -1, 1, 0, 0};
int dc[4]{ 0, 0, 1, -1};
 
// Problem link = https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2035

int cnt = 0;
int n, m; 
char l;

bool valid(int r, int n)
{   
    if(r >= n || r < 0)
        return false;
 
    return true;
}

int fix(int c)
{
    if(c >= m) return 0;

    if(c < 0) return m - 1;

    return c;
}

void dfs(int r, int c, vector<vector<char>>& grid, vector<vector<bool>> &visited)
{
    if(!valid(r, n) || grid[r][c] != l || visited[r][c]) return;

    visited[r][c] = true;

    cnt++;

    for(int i = 0; i < 4; i++) dfs(r + dr[i], fix(c + dc[i]), grid, visited);

}
 
int main()
{   
    std::ios_base::sync_with_stdio(false); cin.tie(0);

    while(cin >> n >> m)
    {
    
    vector<vector<char>>grid(n, vector<char>(m));
    vector<vector<bool>>visited(n, vector<bool>(m, false));

    for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) cin >> grid[i][j];
        

    int x, y; cin >> x >> y;

    l = grid[x][y];
    dfs(x, y, grid, visited);

    int ans = 0;

    for(int i = 0; i < n; i++) 
    {
        for(int j = 0; j < m; j++)
        {
            if(grid[i][j] == l && !visited[i][j])
            {
                cnt = 0;
                dfs(i, j, grid, visited);
                ans = max(ans, cnt);
            }
        }
    }

    
        cout << ans << endl;
    }
}
