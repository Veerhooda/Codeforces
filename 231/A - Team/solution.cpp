#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#define int long long
using namespace std;
signed main()
{
    int n;
    cin>>n;
    int count =0;
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b+c>=2){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}