#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#define int long long
using namespace std;
void sw1(vector<int>&a){
    for(int i=0;i<a.size();i+=2){
        swap(a[i],a[i+1]);
    }
}
void sw2(vector<int>&a){
    int n=a.size()/2;
    for(int i=0;i<n;i++){
        swap(a[i],a[n+i]);
    }
}
signed main()
{
    int p;
    cin>>p;
    int n=2*p;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int>c=a;
    vector<int>target=a;
    sort(target.begin(),target.end());
    if(a==target){
        cout<<0<<endl;
        return 0;
    }
    else{
        int max_ops=4*p;
        int ans1 = -1;
        vector<int> temp1 = a;
        for (int count = 1; count <= max_ops; count++) {
        if (count % 2 != 0) sw1(temp1);
        else sw2(temp1);
 
        if (temp1 == target) {
            ans1 = count;
            break;
        }
    }
 
 
        int ans2 = -1;
        vector<int> temp2 = a;
        for (int count = 1; count <= max_ops; count++) {
            if (count % 2 != 0) sw2(temp2);
            else sw1(temp2);
 
            if (temp2 == target) {
                ans2 = count;
                break;
            }
        }
 
 
        if(ans1 == -1 && ans2 == -1){
            cout << -1 << endl;
        }
        else if(ans1 == -1){
            cout << ans2 << endl;
        }       
        else if(ans2 == -1){
            cout << ans1 << endl;
        }
        else{
            cout << min(ans1, ans2) << endl;
        }
    }
    return 0;
}