#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdint>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int unsorted=0;
        for(int i=0;i<n-1;i++){
 
            if(a[i+1]<a[i]){
                unsorted=1;
                break;
            }
        }
        if(unsorted==1){
            cout<<0<<endl;
            continue;
        }
        sort(a.begin(), a.end());
 
        int duplicate=0;
        for(int i=0;i<n-1;i++){
            if(a[i]==a[i+1]){
                duplicate=1;
                break;
            }
        }
        if(duplicate==1){
            cout<<1<<endl;
            continue;
        }
        
        int mindiff=INT32_MAX;
        for(int i=0;i<n-1;i++){
            if(a[i+1]-a[i]<mindiff){
                mindiff=a[i+1]-a[i];
            }
        }
        cout << (mindiff / 2) + 1 << endl;
    }
}