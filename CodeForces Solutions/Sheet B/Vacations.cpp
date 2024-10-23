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

// Problem link = http://codeforces.com/contest/699/problem/C

int arr2[100];
int n;
int arr[101][5];
 
int fun(int index, int flag)
{
   if(index == n)
        return 0;
 
   int & ret = arr[index][flag];
 
   if(ret != -1)
        return ret;
 
 
   if(arr2[index] == flag || arr2[index] == 0)
    ret = fun(index + 1 , 0) + 1;
 
   else if(arr2[index] != 3)
    ret = fun(index + 1 , arr2[index]);
 
   else
   {
       if(flag == 0 || flag == 4)
        ret = min(fun(index + 1 ,1),  fun(index + 1 , 2));
 
       else
       {
           if(flag == 2)
 
                ret = fun(index + 1 , 1);
 
           else
                ret = fun(index + 1 , 2);
       }
   }
 
    return ret;
}
 
int main()
{   
    std::ios_base::sync_with_stdio(false); cin.tie(0);

    cin >> n;
 
    arr2[n];
 
 
    for(int i = 0; i < n; i++)
        cin >> arr2[i];
 
    memset(arr, -1, sizeof(arr));
 
    cout << fun(0,4) << endl;
 
}