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
 


// bool valid(int r, int c, int n, int m)
// {
//     if(r >= n || r < 0 || c >= m || c < 0)
//         return false;
 
//     return true;
// }

// Problem link : https://codeforces.com/contest/400/problem/B



int main() {

    std::ios_base::sync_with_stdio(false); cin.tie(0);

    int n, m; cin >> n >> m;

    set<int> s;
    int counter = 0;
    while(n--)
    {
        string str; cin >> str;

        if(str.find('S') < str.find('G')) counter = -1;

        else s.insert(str.find('S') - str.find('G'));
    }

    if(counter == -1) cout << -1 << endl;
    
    else cout << s.size() << endl;

    return 0;
 
}
