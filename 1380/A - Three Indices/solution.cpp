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
        int n;
        cin>>n;
        vector<int>p(n);
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        int a=0;
        
        for(int j=0;j<n-1;j++){
            int b=0;
            int c=0;
            int idx=0;
            int idx1=0;
            for(int i=0;i<j;i++){
                if(p[j]>p[i]){
                    b=1;
                    idx=i+1;
                    break;
                }
            }
            for(int i=j+1;i<n;i++){
                if(p[j]>p[i]){
                    c=1;
                    idx1=i+1;
                    break;
                }
            }
            if(b==1 && c==1){
                cout<<"YES"<<endl;
                cout<<idx<<" "<<j+1<<" "<<idx1<<endl;
                a=1;
            }
            if(a==1){
                break;
            }
        }
        if(a==0){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}