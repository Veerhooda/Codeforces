#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int b=0;
        for(int i=0;i<n-1;i++){
            if(i%2!=0 && a[i]!=a[i+1]){
                b=0;
                break;
            }
            else{
                b=1;
            }
        }
        if(b==1){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}