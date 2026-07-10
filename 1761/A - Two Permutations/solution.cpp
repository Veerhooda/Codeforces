#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        int b;
        int n;
        cin>>n>>a>>b;
        if(a==b && a==n){
            cout<<"Yes"<<endl;
        }
        else{   
            if(a+b<=n-2){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;}
            }
        
    }
}