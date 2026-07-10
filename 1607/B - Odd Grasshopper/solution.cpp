#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long x;
        cin>>x;
        long long n;
        cin>>n;
        long long change;
        if(n%4==0){
            change=0;
        }
        else if(n%4==1){
            change=-n;
        }
        else if(n%4==2){
            change=1;
        }
        else if(n%4==3){
            change=n+1;
        }
        if(x%2==0){
            x=change+x;
        }
        else{
            x=x-change;
        }
        cout<<x<<endl;
    }
}