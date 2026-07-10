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
        int b=0;
        for(int i=0;i<n;i++){
            if(b==0){
            int target =n-i; 
                if (a[i] != target) {
                    for(int j=i+1;j<n;j++){
                        if(a[j]==target){ 
                            reverse(a.begin()+i, a.begin()+j+1);
                            b=1;
                            break; 
                        }
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
 
    }
}