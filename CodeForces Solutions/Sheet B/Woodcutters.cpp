#include <bits/stdc++.h>
#define sz(v) ((int)((v).size()))
#define MOD 1000000007
using namespace std;
using ll = long long;
const int OO = (int)1e6;
////////////////////////// YOUSEF SAAD /////////////////////////
//int dr[8]{ -1, 1, 0, 0, -1, -1, 1, 1};
//int dc[8]{ 0, 0, 1, -1, 1, -1, -1, 1};
 
// Problem link = 

// bool valid(int r, int c, int n, int m)
// {
//     if(r >= n || r < 0 || c >= m || c < 0)
//         return false;
 
//     return true;
// }

// Problem link : http://codeforces.com/contest/545/problem/C

vector<pair<int, int>> arr;
int n;
int memo[100001][2];
 
int dp(int index, int isRight)
{
    if(index >= n - 1) return 0;
    
    int & ret = memo[index][isRight];
    
    if(ret != -1) return ret;
    
    int leave = dp(index + 1, 0);
    int take = 0;

    if(arr[index].first - arr[index].second > arr[index - 1].first + isRight * arr[index - 1].second)
        take = max(take, 1 + dp(index + 1, 0));

    if(arr[index].first + arr[index].second < arr[index + 1].first)
        take = max(take, 1 + dp(index + 1, 1));

        
    return ret = max(leave, take);
}
 
int main()
{   
    std::ios_base::sync_with_stdio(false); cin.tie(0);

    cin >> n;

    for(int i = 0; i < n; i++)
    {   
        int a, b; cin >> a >> b;
        arr.push_back({a , b});
    }
       
    if(n <= 2)
    {   
        cout << n << endl;
        return 0;
    }

    memset(memo, -1, sizeof(memo));
    
    cout << dp(1, 0) + 2 << endl;
 
}