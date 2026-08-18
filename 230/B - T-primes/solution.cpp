#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#define int long long
using namespace std;
bool prime(int r){
    if(r==1)return false;
    if(r==2 or r==3) return true;
    if(r%2==0 or r%3==0)return false;
    for(int i=5;i*i<=r;i+=6){
        if(r%i==0 or r%(i+2)==0)return false;
    }
    return true;
}
signed main()
{
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        if(x==1 or x==2 or x==3){
            cout<<"NO"<<endl;
        }else{
            int r=round(sqrt(x));
            if(r*r==x&& prime(r)){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}