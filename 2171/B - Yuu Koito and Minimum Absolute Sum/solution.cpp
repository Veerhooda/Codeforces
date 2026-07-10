#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(a[0]==-1 && a[n-1]!=-1){
            a[0]=a[n-1];
        }
        if(a[n-1]==-1 && a[0]!=-1){
            a[n-1]=a[0];
        }
        else{
            for(int i=0;i<n;i++){
                if(a[i]==-1){
                    a[i]=0;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(a[i]==-1){
                a[i]=0;
            }
        }
        cout<<abs(a[n-1]- a[0]) <<endl;
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}