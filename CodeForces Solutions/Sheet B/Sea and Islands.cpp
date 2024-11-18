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
 
// Problem link = https://codeforces.com/contest/544/problem/B

void solve() 
{   
   int n, k; cin >> n >> k;

   int size = n * n;

   if(size % 2 == 0) size /= 2;

   else size = (size + 1) / 2;

   if(size < k) cout << "NO" << endl;

   else
   {
        cout << "YES" << endl;

        bool flag1 = true;

        for(int i = 0; i < n; i++)
        {   
            bool flag = flag1;

            for(int j = 0; j < n; j++)
            {
                if(k == 0) flag = false;

                if(flag == true && k > 0)
                {
                    cout << "L";
                    flag = false;
                    k--;
                }

                else
                {
                    cout << "S";
                    flag = true;
                }
            }

            if(flag1) flag1 = false;
            else flag1 = true;

            cout << endl;
        }
   }
    
   
}
 
int main()
{   
    optimize();

    solve();
}