#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> teams;
        for(int i=0;i<n-1;i++){
            int x;
            cin>>x;
            teams.push_back(x);
        }
        int sum=0;
        for(int i=0;i<n-1;i++){
            sum+=teams[i];
        }
        int output = 0-sum;
        cout<<output<<endl;
    }
}