#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long n,k,x;
        cin>>n>>k>>x;
        long long frontsum;
        long long backsum;
        frontsum=(k*(k+1))/2;
        backsum=k*(2*n+1-k)/2;
        if(x>=frontsum && x<=backsum){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
        }
}