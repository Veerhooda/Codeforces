#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#define int long long
using namespace std;
signed main()
{
    int n,q;
    cin>>n>>q;
    vector<int>a(n);
    vector<int>last(n,-1);
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    int global=0;
    int number=0;
    int lastime=-1;
    while(q--){
        int b;
        cin>>b;
        if(b==1){
            int i;
            cin>>i;
            i--;
            int x;
            cin>>x;
            int old;
            if(last[i]<lastime){
                old=global;
            }
            else{
                old=a[i];
            }
            sum=sum-old+x;
            a[i]=x;
            last[i]=number;
        }
        else{
            int x;
            cin>>x;
            sum=n*x;
            global=x;
            lastime=number;
        }
        number++;
        cout<<sum<<endl;
    }
    return 0;
}