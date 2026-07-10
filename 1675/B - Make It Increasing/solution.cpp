#include <iostream>
#include <vector>
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
        for(int i=1;i<n;i++){
            if(a[i]<=a[i-1]){
                b=1;
            }
        }
        int count =0;
        bool possible = true;
        if(b==0){
            cout<<"0"<<endl;
        }
        else{
            for(int i=n-2;i>=0;i--){
                    if(a[i]>=a[i+1]){
                        while(a[i]>=a[i+1] && a[i]>0){
                            a[i]=a[i]/2;
                        count++;
                        }
                        if(a[i]>=a[i+1]){
                             possible=false;
                        }
                }
            }
            
                    if(possible){
                        cout<<count<<endl;
                    }
                    else{
                        cout<<-1<<endl;
                    }
                    
        }
    }
}