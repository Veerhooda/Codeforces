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
    cin>>t;
    while(t--){
        int n,k,p,m;
        cin>>n>>k>>p>>m;
        p--;
        vector<int>a(n);
 
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
 
        if(n==k){
            cout<<m/a[p]<<endl;
            continue;
        }
        else{
            int cost=0;
            int count=0;
 
            while(true){ 
                if(p<k){
                    if(a[p]>m){
                        break;
                    }
 
                    m-=a[p];
                    count++;
 
                    int temp=a[p];
                    a.erase(a.begin()+(p));
                    a.push_back(temp);
                    p=n-1;
                }
                else{
                    int mn=m+1;
 
                    for(int i=0;i<k;i++){
                        mn=min(a[i],mn);
                    }
 
                    if(mn>m) break;
 
                    for(int i=0;i<k;i++){
                        if(a[i]==mn){
                            a.erase(a.begin()+i);
                            a.push_back(mn);
                            p--;
                            m-=mn;
                            break;
                        }
                    }
                }
            }
 
            cout<<count<<endl;
        }
    }
 
    return 0;
}