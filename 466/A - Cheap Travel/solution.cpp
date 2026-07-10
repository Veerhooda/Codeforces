#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#define int long long
using namespace std;
signed main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int cost=min({n*a,((n+m-1)/m)*b,(n/m)*b+(n%m)*a});
    cout<<cost<<endl;
    return 0;
}