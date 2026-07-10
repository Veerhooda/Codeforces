#include <iostream>
#include <vector>
#include <numeric> 
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
        int g=a[0];
        for(int i=1;i<n;i++){
            g= gcd(g,a[i]);
        }
        if(g<=n){
            int b=0;
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(i!=j && gcd(a[i],a[j])<=2){
                        b=1;
                        break;
                    }
                }
            }
                if(b==1){
                    cout<<"Yes"<<endl;
                }
                
                if(b==0){
                    cout<<"No"<<endl;
                }
            
 
        }
        else{
            cout<<"No"<<endl;
        }
    }
}