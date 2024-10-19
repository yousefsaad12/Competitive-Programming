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




int main() {

    std::ios_base::sync_with_stdio(false); cin.tie(0);

    int n;
    cin >> n;
    
    int arr [n];
    int maximum = INT_MIN;
    int minimum = INT_MAX;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];

        maximum = max(maximum, arr[i]);
        minimum = min(minimum, arr[i]);
    }
 
    for(auto & num : arr)
    {
        if(num == minimum || num == maximum || num - minimum == maximum - num) continue;

        else
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;   

    return 0;
 
}