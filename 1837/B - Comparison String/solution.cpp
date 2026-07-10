#include <iostream>
#include <vector>
#include <set>
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
        set<int>a;
        int j=100;
        a.insert(j);
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]){
                j--;
                a.insert(j);
            }
            else{
                j=100;
                a.insert(j);
            }
        }
        cout<<a.size()+1<<endl;
    }
}