#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int a=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='u'){
                a=1;
            }
        }
        if(a==0){
            cout<<0<<endl;
        }
        else{
            int n=s.length();
            int count=0;
            if(s[0]=='u'){
                count++;
                s[0]='s';
            }
            if(s[n-1]=='u'){
                count++;
                s[n-1]='s';
            }
            for(int i=1;i<n-1;i++){
                if(s[i]=='u' && s[i+1]=='u' && s[i-1]=='u'){
                    s[i]='s';
                    count++;
                }
                else if(s[i]=='u' && s[i+1]=='u' && s[i-1]=='s'){
                    s[i+1]='s';
                    count++;
                }
            }
            cout<<count<<endl;
        }
    }
}