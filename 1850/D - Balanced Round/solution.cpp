#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int k;
        cin>>n;
        cin>>k;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int count =1;
        int coun=1;
        for(int i=0;i<n-1;i++){
            if(a[i+1]-a[i]<=k){
                count++;
            }
            else{
                coun=max(coun,count);
                count=1;
            }
        }
        coun=max(coun,count);
        cout<<n-coun<<endl;
        
    }
}