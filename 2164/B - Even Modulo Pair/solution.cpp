#include <iostream>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        int z=0;
        for(int j=0;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                int p=0;
                p=arr[k]%arr[j];
                if(p%2==0){
                    cout<<arr[j]<<" "<<arr[k]<<endl;
                    z=1;
                    break;
                }
            }
            if(z==1){
                    break;
                }
        }
        if(z==0){
            cout<<-1<<endl;
        }
    }
}