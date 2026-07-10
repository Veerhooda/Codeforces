#include <iostream>
#include <vector>
#include <algorithm>
#define int long long
using namespace std;
 
signed main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        bool st=false;
        if(a!=0 && (2*b-c)>=1 && (2*b-c)%a==0){
            st=true;
        }
        if( 2*b!=0 && (a+c)>=1 && (a+c)%(2*b)==0){
            st=true;
        }
        if( c!=0 && (2*b-a)>=1 && (2*b-a)%c==0){
            st=true;
        }
        if(st){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}