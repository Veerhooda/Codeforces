#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int c=0;
        int b=0;
        int even=0;
        int odd=0;
        if(n==1){
            cout<<"NO"<<endl;
        }
        else{
            for(int i=0;i<n;i++){
                if(a[i]%2==0){
                    even+=a[i];
                }
                else{
                    odd+=a[i];
                }
            }
            if(even%2==0)c=1;
            if(odd%2==0)b=1;
            if(c==1 && b==1 ){
                cout<<"YES"<<endl;
            }
            else if(c==0 && b==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}