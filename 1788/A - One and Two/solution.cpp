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
        int k=0;
        int b=0;
        vector<int>v;
        for(int i=0;i<n;i++){
            if(a[i]==1){
                a[i]=0;
            }
        }
        while(k<=n-2){
            int c=0;
            int d=0;
            for(int i=0;i<=k;i++){
                c+=a[i];
            }
            for(int i=k+1;i<n;i++){
                d+=a[i];
            }
            if(c==d){
                b=1;
                v.push_back(k);
            }
            k++;
        }
        if(b==0){
            cout<<-1<<endl;
        }
        else{
            sort(v.begin(),v.end());
            cout<<v[0]+1<<endl;
        }
    }
}