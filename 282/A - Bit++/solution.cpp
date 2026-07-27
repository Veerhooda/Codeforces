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
    int x=0;
    while(n--){
        string s;
        cin>>s;
        if(s=="X++" || s=="++X"){
            x++;
        }else{
            x--;
        }
    }
    cout<<x<<endl;
    return 0;
}