#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long k;
        cin>>k;
        int a=0;
        if(k==n or k==1 or n%2==0){
            cout<<"YES"<<endl;
        }
        else{
        if((n-k)%2==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        }
    }
}