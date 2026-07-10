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
        string n;
        cin>>n;
        int sum=0;
        vector<int>play;
        for(int i=0;i<n.size();i++){
            char ch=n[i];
            int p=ch-'0';
            if(i==0){
                play.push_back(p-1);
            }
            else{
                play.push_back(p);
            }
            sum+=p;
        }
        if(sum<10){
            cout<<0<<endl;
            continue;
        }
        sort(play.rbegin(),play.rend());
        int count=0;
        int i=0;
        while(sum>9){
            sum-=play[i];
            count++;
            i++;
        }
        cout<<count<<endl;
    }
    return 0;
}