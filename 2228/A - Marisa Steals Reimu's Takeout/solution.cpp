#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#define int long long
using namespace std;
/*
question:
inputs : n days , array w- deliciousness n is less than 100 , w is between 0 to 2
number of interest :3
can perform zero or more operations
operation :select a non empty subsequence of w whose sum is divisible by 3 then remove all the elements of the subsequence from w
 
 
determine max outputs
 
solution approach: count the number of pairs of 1 and 2 and add number of zeroes in them
 
edit : we have to treat zeros , [1,2] pairs and leftover 1s and 2s separately. So we will count zeroes, 1,2 pairs and leftover 1s or 2s divided by 3
*/
signed main()
{
    int t;
    cin>>t;
 
    while(t--){
        int n;
        cin>>n;
        
        vector<int>w(n);
        for(int i=0;i<n;i++){
            cin>>w[i];
        }
 
        int zero=0;
        int one=0;
        int two=0;
        int count=0;
        for(auto i:w){
            if(i==0){
                zero++;
            }
            else if(i==1){
                one++;
            }
            else{
                two++;
            }
        }
        count = min(one,two);
        one-=count;
        two-=count;
        int output = count+(one/3)+(two/3)+zero;
 
        
        cout<<output<<endl;
    }
    return 0;
}