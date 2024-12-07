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
 
// Problem link = https://acm.timus.ru/problem.aspx?space=1&num=1349

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
    int n; cin >> n;

    if(n == 1) cout << 1  << " " << 2 << " " << 3 << endl;

    else if(n == 2) cout << 3 << " " << 4 << " " << 5 << endl;

    else cout << -1 << endl;
}

 
int main()
{   
    optimize();
    solve();
}