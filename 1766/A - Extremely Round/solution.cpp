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
        string s=to_string(n);
        int digits =s.length();
        int f=s[0]-'0';
        long long output=((digits-1)*9)+f;
        cout<<output<<endl;
    }
}