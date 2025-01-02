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

// Problem Link = https://codeforces.com/contest/493/problem/B

const int MAX_VAL = 100000;
int dr[4]{ -1, 1, 0, 0};
int dc[4]{ 0, 0, 1, -1};

void solve() 
{    
    int n; cin >> n;

    vector<int>first, second;
    ll sumF = 0, sumS = 0;
    bool last = true;
    while(n--)
    {
        int x; cin >> x;

        if(x > 0) sumF += x, first.push_back(x);

        else sumS += abs(x), second.push_back(abs(x));

        if(n == 0 && x < 0) last = false;
    }

    if(sumF > sumS)
    {
        cout << "first" << endl;
        return;
    }
    else if(sumS > sumF)
    {
        cout << "second" << endl;
        return;
    }

    else
    {
        int indexF = 0, indexS = 0;

        while(indexF < first.size() && indexS < second.size())
        {
            if(first[indexF] > second[indexS])
            {
                cout << "first" << endl;
                return;
            }
            if(first[indexF] < second[indexS])
            {
                cout << "second" << endl;
                return;
            }

            indexF++, indexS++;
        }

        if(indexF < first.size() && indexS == second.size()) cout << "first" << endl;

        else if(indexF == first.size() && indexS < second.size()) cout << "second" << endl;

        else cout << (last == true ? "first" : "second") << endl;
        
    }
}

 
int main()
{   
    optimize();
    //int t; cin >> t;

    //while(t--) 
    solve();
}