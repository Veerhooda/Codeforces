#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        int a=0;
        int b=0;
        for(int j=0;j<n;j++){
            if(arr[j]%2==0){
                a=1;
            }
            else{
                b=1;
            }
        }
        if(a==1 && b==1){
            sort(arr+0,arr+n);
        }
        for(int j=0;j<n;j++){
            cout<<arr[j]<<" ";
        }
    }
    cout<<endl;
}