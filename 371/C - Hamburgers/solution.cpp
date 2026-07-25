#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#define int long long
using namespace std;
string s;
int nb,ns,nc;
int pb,ps,pc;
int r;
int b=0,su=0,c=0;
bool ok(int d){
    __int128 rb=d*b;
    __int128 rsu=d*su;
    __int128 rc=d*c;
    if(rb>nb)rb-=nb;
    else rb=0;
    if(rsu>ns)rsu-=ns;
    else rsu=0;
    if(rc>nc)rc-=nc;
    else rc=0;
    __int128 reqd=(pb*rb)+(ps*rsu)+(pc*rc);
    if(reqd>r)return false;
    return true;
}
signed main()
{
    cin>>s>>nb>>ns>>nc>>pb>>ps>>pc>>r;
    for(int i=0;i<s.size();i++){
        if(s[i]=='B'){
            b++;
        }else if(s[i]=='S'){
            su++;
        }else{
            c++;
        }
    }
    int lo=0,hi=1e15;
    int ans=0;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(ok(mid)){
            ans=mid;
            lo=mid+1;
        }else{
            hi=mid-1;
        }
    }
    cout<<ans;
    return 0;
}