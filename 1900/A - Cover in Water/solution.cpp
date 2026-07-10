#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int k=0;k<test;k++){
    int n;
    int a=0;
    string s;
    cin>>n;
    cin>>s;
    int count=0;
    for(int i=0;i<n;i++){
        if(s[i]=='.'){
            count++;
        }
    }
    for(int i=0;i<n-2;i++){
        if(s[i+2]=='.' && s[i]==s[i+1] && s[i+1]==s[i+2] ){
            a=1;
            break;
        }
    }
    if(a==1){
        cout<<"2"<<endl;
    }
    else{
        cout<<count<<endl;
    }
}
    return 0;
}