#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
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
        int time=0;
        for(int i=0;i<n-1;i++){
            time+=abs(a[i]-a[i+1]);
        }
        int mintime=time;
        for(int i=0;i<n;i++){
            int current=time;
            if(i==0){
                current-=abs(a[0]-a[1]);
            }
            else if(i==n-1){
                current-=abs(a[n-2]-a[n-1]);
            }
            else{
                current-=abs(a[i]-a[i-1]);
                current-=abs(a[i]-a[i+1]);
                current+=abs(a[i-1]-a[i+1]);
            }
            mintime=min(mintime,current);
        }
        cout<<mintime<<endl;
    }
}