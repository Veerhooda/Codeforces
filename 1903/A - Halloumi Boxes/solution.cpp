#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n=0;
        int k=0;
        int a=0;
        cin>>n>>k;
        vector<int> arr(n);
        vector<int> ik(n);
        for(int i=0;i<n;i++){
            int u=0;
            cin>>u;
            arr.push_back(u);
            ik.push_back(u);
        }
        sort(ik.begin(),ik.end());
        if(ik!=arr && k>=2){
            cout<<"YES"<<endl;
        }else if(ik==arr){
            cout<<"Yes"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}