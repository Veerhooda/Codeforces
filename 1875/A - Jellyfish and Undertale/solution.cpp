#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a;
        long long b;
        int n;
        cin>>a>>b>>n;
        vector<int>x(n);
        for(int i=0;i<n;i++){
            cin>>x[i];
        }
        for(int i=0;i<n;i++){
            if(x[i]>a-1){
                x[i]=a-1;
            }
        }
        long long sum=0;
        for(int i=0;i<n;i++){
            sum+=x[i];
        }
        long long output=sum+(b);
        cout<<output<<endl;
    }
}