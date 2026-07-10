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
        int count=0;
        vector<int>b;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                count++;
            }
            else{
                b.push_back(count);
                count=0;
            }
        }
        b.push_back(count);
        int maxn=0;
        for(int i=0;i<b.size();i++){
            maxn=max(maxn,b[i]);
        }
        cout<<maxn<<endl;
    }
}