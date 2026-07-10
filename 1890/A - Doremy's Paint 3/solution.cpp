#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        set<int> b;
 
        int count1=0;
        int count2=0;
        for(int i=0;i<n;i++){
            b.insert(a[i]);
        }
        if(b.size()>2){
            cout<<"No"<<endl;
        }
        else if(b.size()==1){
            cout<<"Yes"<<endl;
        }
        else{
            vector<int> c(b.begin(),b.end());
            for(int i=0;i<n;i++){
                if(a[i]==c[0]){
                    count1++;
                }
                if(a[i]==c[1]){
                    count2++;
                }
            }
            if(abs(count1-count2)<=1){
                cout<<"Yes"<<endl;
            }
            else{
            cout<<"No"<<endl;
            }
        }
    }
}