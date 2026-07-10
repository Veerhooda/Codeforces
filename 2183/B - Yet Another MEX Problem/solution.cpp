#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int k;
        cin>>k;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int str=0;
        for(int i=0;i<n;i++){
            if(a[i]==str){
                str++;
            }
        }
        cout<<min(str,k-1)<<endl;
    }
}