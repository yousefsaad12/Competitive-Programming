#include <bits/stdc++.h>
#define sz(v) ((int)((v).size()))
#define MOD 1000000007
using namespace std;
using ll = long long;
const int OO = (int)1e6;
////////////////////////// YOUSEF SAAD /////////////////////////
int dr[4]{ -1, 1, 0, 0};
int dc[4]{ 0, 0, 1, -1};
 
// Problem link = https://codeforces.com/contest/352/problem/B


// bool valid(int r, int n)
// {   
//     if(r >= n || r < 0)
//         return false;
 
//     return true;
// }



void solve() 
{
    int n; cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) cin >> arr[i];

    map<int, int>mp;

    int index[100005]{0};
    
    for(int i = 0; i < n; i++)
    {
        if(mp.count(arr[i]) > 0)
        {
            int lastIndex = index[arr[i]];

            if((mp[arr[i]] != 0 &&  mp[arr[i]] != abs(lastIndex - i)) || mp[arr[i]] == OO)
            {   
                mp[arr[i]] = OO;
                continue;
            } 
            
            mp[arr[i]] = abs(lastIndex - i);

            index[arr[i]] = i;
        }

        else mp[arr[i]] = 0, index[arr[i]] = i;
    }

    vector<pair<int,int>>ans;

    for(auto & it : mp) if(it.second != OO) ans.push_back({it.first, it.second});

    sort(ans.begin(), ans.end());

    cout << ans.size() << endl;

    for(auto & num : ans) cout << num.first << " " << num.second << endl;

    
    
}
 
int main()
{   
    std::ios_base::sync_with_stdio(false); cin.tie(nullptr);

    solve();
}