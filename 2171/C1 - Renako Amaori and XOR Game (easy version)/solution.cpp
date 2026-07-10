#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        vector<int>mai(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>mai[i];
        }
        int ajasai=0;
        int ma=0;
        for(int i=0;i<n;i++){
            if(a[i]==1){
                ajasai++;
            }
            if(mai[i]==1){
                ma++;
            }
        }
        for(int i=0;i<n;i++){
            if(i%2==0){
                if(ajasai%2==0 && a[i]!=mai[i]){
                    if(a[i]==1){
                        ajasai--;
                        ma++;
                    }
                    else{
                        ajasai++;
                        ma--;
                    }
                    swap(a[i],mai[i]);
                }
            }
            else{
                if(ma%2==0 && mai[i]!=a[i]){
                    if(mai[i]==1){
                        ma--;
                        ajasai++;
                    }
                    else{
                        ma++;
                        ajasai--;
                    }
                    swap(a[i],mai[i]);
                }
            }
        }
        if(ajasai%2 == ma%2){
            cout<<"Tie"<<endl;
        }
        else if(ajasai%2 > ma%2){
            cout<<"Ajisai"<<endl;
        }
        else{
            cout<<"Mai"<<endl;
        }
    }
}