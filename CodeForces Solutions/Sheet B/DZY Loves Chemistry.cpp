/*بسم الله الرحمن الرحيم */
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
 
// Problem link = https://codeforces.com/contest/445/problem/B

int gcd_S(int a, int b) {
    if(b==0)
        return a;
    return gcd(b, a%b);
}

int N = 1e2;
vector<vector<int>> grid(500);
vector<bool> visited(500, false);

void bfs(int start) {

    queue<int> q;
    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        for (auto neighbor : grid[node]) if (!visited[neighbor]) visited[neighbor] = true, q.push(neighbor);
    }
}

void solve() {   
    int n, m;
    cin >> n >> m;

    
    for (int i = 0; i < m; i++) {
        int to, from;
        cin >> to >> from;
        grid[to].push_back(from);
        grid[from].push_back(to);
    }

    ll connected = 0;

    
    for (int i = 1; i <= n; i++) if (!visited[i]) bfs(i), connected++;
        
    cout << (ll) pow(2, n - connected) << endl;
}
 
int main() {   
    
    optimize();
    solve();
}