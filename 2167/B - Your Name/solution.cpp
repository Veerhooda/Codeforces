#include <bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string t;
        cin>>t;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}