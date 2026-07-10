#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#define int long long
using namespace std;
signed main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==1){
            cout<<0<<endl;
        }
        else if(n%3!=0){
            cout<<-1<<endl;
        }
        else{
            int count3=0;
            while(n%3==0){
                n=n/3;
                count3++;
            }
            int count2=0;
            while(n%2==0){
                n=n/2;
                count2++;
            }
            if(count2>count3){
                cout<<-1<<endl;
            }
            else if(n==1){
                cout<<max(count2,count3)+abs(count2-count3)<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
    }
    return 0;
}