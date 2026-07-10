#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int r;
        int x;
        int d;
        int n;
        cin>>r>>x>>d>>n;
        string a;
        cin>>a;
        int rm=r;
        int l=r;
        int output=0;
        for(int j=0;j<n;j++){
            if(a[j]=='1'){
                rm=rm+d;
                l=max(l-d,0);
                output++;
            }
            else{
                if(l<x){
                    rm=min(x-1+d,rm+d);
                l=max(0,l-d);
                output++;
                }
            }
        }
        cout<<output<<endl;
    }
    return 0;
}