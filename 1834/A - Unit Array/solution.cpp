#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
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
        int positive=0;
        int negative=0;
        for(int i=0;i<n;i++){
            if(a[i]>0){
                positive++;
            }
            else{
                negative++;
            }
        }
        int output=0;
        if(negative>positive){
            output=(negative-positive+1)/2;
            negative-=output;
        }
        if((negative)%2!=0){
            output++;
        }
        cout<<output<<endl;
 
    }
}