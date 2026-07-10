#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int k=0;k<t;k++){
        int n;
        cin>>n;
        vector<int> ik;
        for(int i=0;i<n;i++){
            int u;
            cin>>u;
            ik.push_back(u);
        }
        if(ik[0]==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}