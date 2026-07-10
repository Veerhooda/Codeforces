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
        string s;
        cin>>s;
        int count=0;
        int l=0;
        int r=n-1;
        while(l<r){
            if(s[l]==s[r]){
                break;
            }
            else{
                count++;
            }
            l++;
            r--;
        }
        cout<<n-2*count<<endl;
    }
}