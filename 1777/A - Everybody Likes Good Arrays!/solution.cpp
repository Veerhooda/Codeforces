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
        vector<int>b;
        for(int i=0;i<n;i++){
            if(a[i]%2==0 && a[i+1]%2!=0){
                b.push_back(a[i]);
            }
            else if(a[i]%2!=0 && a[i+1]%2==0){
                b.push_back(a[i]);
            }
            else{
                int j=1;
                int k=i;
                while(a[k]%2==a[k+1]%2){
                    j*=a[i];
                    k++;
                }
                b.push_back(j);
                i=k;
 
            }
        }
        cout<<a.size()-b.size()<<endl;
    }
}