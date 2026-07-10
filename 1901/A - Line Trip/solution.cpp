#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int k=0;k<t;k++){
    int n=0;
    int x=0;
    cin>>n>>x;
    vector<int> gas;
    for(int i=0;i<n;i++){
        int in;
        cin>>in;
        gas.push_back(in);
    }
    gas.push_back(x);
    gas.insert(gas.begin(),0);
    int a=0;
    int b=gas.size();
    for(int i=0;i<n+1;i++){
        a=max(a,(gas[i+1])-(gas[i]));
    }
    int lastmax=2*((gas[b-1])-(gas[b-2]));
    int final=max(lastmax,a);
    cout<< final<<endl;
}
    return 0;
}