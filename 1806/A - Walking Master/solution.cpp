#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        int b;
        cin>>a;
        cin>>b;
        int c;
        int d;
        cin>>c;
        cin>>d;
        if(b>d){
            cout<<"-1"<<endl;
        }
        else{
            if((a+(d-b))<c){
                cout<<"-1"<<endl;
            }
            else{
                a=a+(d-b);
                cout<<(d-b)+(a-c)<<endl;
            }
        }
    }
}