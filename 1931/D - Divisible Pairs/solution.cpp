#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include <map>
#include<cmath>
#define int long long
using namespace std;
 
//                            *LOGIC*
//isme ham pehle target x or y nikalenge x or y se divide krke remainder , usko baad ham remainder of x and remainder of y lenge 
//or rx=(x-tx)%x or ry=ty hoga kyuki (a[i] +a[j])%x =0 => (aj)%x=-a[y]%x ye iska minimum value h so maximum hoga rx = (x-{ai}%x)%x
//fir uske pair ke count ko map me check krenge or uski freuency ek variable me store kr lenge fir output krdenge
 
signed main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        map<pair<int,int>,int>a;
        int b=0;
        for(int i=0;i<n;i++){
            int v;
            cin>>v;
            int tx = v%x;
            int ty= v%y;
 
            int rx=(x-tx)%x;
            int ry=ty;
            
            if(a.count({tx,ty})){
                b+=a[{tx,ty}];
            }
            a[{rx,ry}]++;
        }
        cout<<b<<endl;
    }
    return 0;
}