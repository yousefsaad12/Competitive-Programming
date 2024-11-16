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
 
// Problem link = https://codeforces.com/contest/448/problem/B

void solve() 
{   
   
    string s, t; cin >> s >> t;

    string st = s, ts = t;

    sort(st.begin(), st.end());
    sort(ts.begin(), ts.end());
    int n = s.size(), m = t.size();
    int res = s.find(t);

    if (res != string::npos)
    {
        cout << "automaton" << endl;
        return ;
    } 
        

    int ptr1 = 0 ,ptr2 = 0;

    while(ptr1 < n && ptr2 < m)
    {
        if(s[ptr1] == t[ptr2]) ptr2++;

        ptr1++;
    }
    

    if(ptr2 == m)
    {   

        cout << "automaton" << endl;
        return;
    }

    
    else if(st == ts) cout << "array" << endl;
          
    else
    {
        int freqS[26]{0};
        int freqT[26]{0};

       

        for(int i = 0; i < n; i++) freqS[s[i] - 'a']++;
        for(int i = 0; i < m; i++) freqT[t[i] - 'a']++;

        if(n >= m)
        {   
            bool flag = true;
            for(int i = 0; i < t.size(); i++) 
            {   
                if(freqT[t[i] - 'a'] > freqS[t[i] - 'a']){

                    flag = false; 
                    break;
                } 
            }

            if(flag) cout << "both" << endl;

            else cout << "need tree" << endl;
        }
        
        else cout << "need tree" << endl;
    }

}
 
int main()
{   
    optimize();

    solve();
}