#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int m;
        cin>>n;
        cin>>m;
        string s;
        string x;
        cin>>x;
        cin>>s;
        int a=0;
        for(int i=0;i<50;i++){
                if(x.find(s)!=string::npos){
                    a=1;
                    cout<<i<<endl;
                    break;
                }
            x=x+x;
            if (x.size() > 25 * s.size()) break;
 
        }
        if(a==0){
            cout<<-1<<endl;
        }
    }
}