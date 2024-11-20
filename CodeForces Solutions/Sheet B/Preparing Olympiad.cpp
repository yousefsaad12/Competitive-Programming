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
 
// Problem link = https://codeforces.com/contest/550/problem/B

void solve() 
{   
    int n, l, r, x; cin >> n >> l >> r >> x;

    int arr[n];

    for(int i = 0; i < n; i++) cin >> arr[i];

    

    int comp = 1 << n;
    sort(arr, arr + n);
    vector<vector<int>>ans;

    for(int i = 1; i < comp; i++)
    {
        vector<int> combinations;

        for(int j = 0; j < n; j++) if(i & (1 << j)) combinations.push_back(arr[j]);

        ans.push_back(combinations);
    }
    
    int counter = 0;

    for(int i = 0; i < ans.size(); i++)
    {
       
        int least = ans[i][0], most = ans[i][ans[i].size() - 1], sum = 0;

        for(int j = 0; j < ans[i].size(); j++) sum += ans[i][j];

        if(most - least >= x && l <= sum && sum <= r) counter++;
    }

    cout << counter << endl;
}
 
int main()
{   
    optimize();

    solve();
}