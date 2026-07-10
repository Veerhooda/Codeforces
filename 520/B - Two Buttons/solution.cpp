#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#define int long long
using namespace std;
signed main()
{
    int n,m;
	cin>>n>>m;
	int output=0;
	while(m>n){
	    if(m%2==0){
	        m=m/2;
	    }
	    else{
	        m++;
	    }
	    output++;
	}
	
	output+=n-m;
	cout<<output;
    return 0;
}