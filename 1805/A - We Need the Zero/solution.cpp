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
        int b=a[0];
        for(int i=1;i<n;i++){
            b=b^a[i];
        }
        int x=0;
        if(n%2!=0){
            x=b;
            cout<<x<<endl;
        }
        else{
            if(b==0){
                cout<<x<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
    }
}