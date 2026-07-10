#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<climits>
#define int long long
using namespace std;
signed main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,x;
        cin>>a>>b>>x;
        vector<int>av;
        vector<int>acost;
        int p=a;
        int cst=0;
        av.push_back(p);
        acost.push_back(cst);
        while(p>0){
            cst++;
            p=p/x;
            av.push_back(p);
            acost.push_back(cst);
        }
        vector<int>bv;
        vector<int>bcost;
        int q=b;
        int bcst=0;
        bv.push_back(q);
        bcost.push_back(bcst);
        while(q>0){
            bcst++;
            q=q/x;
            bv.push_back(q);
            bcost.push_back(bcst);
        }
        int ans=LLONG_MAX;
        for(int i=0;i<av.size();i++){
            for(int j=0;j<bv.size();j++){
                int valueA=av[i];
                int costA=acost[i];
                int valueB=bv[j];
                int costB=bcost[j];
                int total = costA+costB+abs(valueA-valueB);\
                if(total<ans){
                    ans=total;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}