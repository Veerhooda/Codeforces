#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int k;
        int x;
        int count =0;
        cin>>n>>k>>x;
        vector<int>output;
        if(x!=1){
            for(int i=0;i<n;i++){
                output.push_back(1);
            }
        }
        else if(n%2==0 && k>=2){
            for(int i=0;i<n/2;i++){
                output.push_back(2);
            }
        }
        else if(n%2!=0 && n%3==0 && k>=3){
            for(int i=0;i<n/3;i++){
                output.push_back(3);
            }
        }
        else if(n%2!=0 && n%3!=0 && k>=3){
            while(n-count>4){
                count+=3;
                output.push_back(3);
            }
            while(n-count==2 || n-count==4){
                count+=2;
                output.push_back(2);
            }
        }
        else{
            output.clear();
        }
        if(output.size()<1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            cout<<output.size()<<endl;
            for(int i=0;i<output.size();i++){
                cout<<output[i]<<" ";
            }
            cout<<endl;
        }
    }
}