#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int a;
    int b;
    int c;
    cin>>a>>b>>c;
    if(a!=b){
        if(a>b){
            cout<<"First"<<endl;
        }
        else{
            cout<<"Second"<<endl;
        }
    }
    else{
        if(c%2==0){
            cout<<"Second"<<endl;
        }
        else{
            cout<<"First"<<endl;
        }
    }
    }
}