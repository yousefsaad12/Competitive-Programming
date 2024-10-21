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

// Problem link : https://codeforces.com/contest/186/problem/B


int main() {

    std::ios_base::sync_with_stdio(false); cin.tie(0);

    double n, t1, t2, k; cin >> n >> t1 >> t2 >> k;

    vector<pair<double, int>> v;

    for(int i = 0; i < n; i++)
    {
        double a, b; cin >> a >> b;
        double ans1 = 0, ans2 = 0;

        double minimum = min(a, b);
        double maximum = max(a, b);
        
        ans1 += (maximum - (maximum * (k / 100))) * t1;
        ans1 += (minimum * t2);
    
        ans2 += (minimum - (minimum * (k / 100))) * t1;
        ans2 += (maximum * t2);
        

        v.push_back({max(ans1, ans2) , i + 1});
    }

    sort(v.begin(), v.end(), [](const pair<double, int>& a, const pair<double, int>& b) {
        if (a.first == b.first) {
            return a.second < b.second;  // Sort by smaller second if first values are equal
        }
        return a.first > b.first;  // Sort by larger first by default
    });


    for(auto & num : v)
    {
        cout << fixed << setprecision(2);
        cout << num.second << " " << num.first << endl;
    }
    
    return 0;
 
}