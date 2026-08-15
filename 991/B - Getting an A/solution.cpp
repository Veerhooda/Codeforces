#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#define int long long
using namespace std;
signed main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    sort(a.rbegin(),a.rend());
    int count=0;
    int p=n-1;
    while(p>=0){
        if(sum*2>=9*n){
            break;
        }
        int diff=5-a[p];
        sum+=diff;
        p--;
        count++;
    }
    cout<<count<<endl;
    return 0;
}