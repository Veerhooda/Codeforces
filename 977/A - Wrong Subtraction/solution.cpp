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
    int k;
    cin>>k;
    for(int i=0;i<k;i++){
        if(n%10==0){
            n=n/10;
        }
        else{
            n--;
        }
    }
    cout<<n<<endl;
    return 0;
}