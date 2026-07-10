#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#define int long long
using namespace std;
 
signed main()
{
    int t;
    cin >> t;
 
    while(t--)
    {
        int n, c;
        cin >> n >> c;
 
        int a = 0, b = 0;
        vector<int> ar(n), br(n);
 
        for(int i = 0; i < n; i++)
        {
            cin >> ar[i];
            a += ar[i];
        }
 
        bool f = false;
        for(int i = 0; i < n; i++)
        {
            cin >> br[i];
            b += br[i];
 
            if(ar[i] < br[i])
                f = true;
        }
 
        vector<int> cr = ar;
        vector<int> dr = br;
 
        sort(cr.begin(), cr.end());
        sort(dr.begin(), dr.end());
 
        bool ok = true;
        for(int i = 0; i < n; i++)
        {
            if(dr[i] > cr[i])
            {
                ok = false;
                break;
            }
        }
 
        if(!ok)
        {
            cout << -1 << '
';
            continue;
        }
 
        if(f)
            cout << c + (a - b) << '
';
        else
            cout << a - b << '
';
    }
 
    return 0;
}