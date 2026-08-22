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
        int n,x,y;
        cin>>n>>x>>y;
        vector<int>a(n);
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        sort(a.begin(),a.end());
        int redlo=sum-y;
        int redhi=sum-x;
        int count=0;
        for(int i=0;i<n;i++){
            int tarmin=redlo-a[i];
            int tarmax=redhi-a[i];
            int lt=-1;
            int lo=i+1;
            int hi=n-1;
            while(hi>=lo){
                int mid=(hi+lo)/2;
                if(a[mid]>=tarmin){
                    lt=mid;
                    hi=mid-1;
                }else{
                    lo=mid+1;
                }
            }
            int rt=-1;
            lo=i+1;
            hi=n-1;
            while(hi>=lo){
                int mid=(hi+lo)/2;
                if(a[mid]<=tarmax){
                    rt=mid;
                    lo=mid+1;
                }else{
                    hi=mid-1;
                }
            }
            if(lt!=-1 && rt!=-1 && lt<=rt){
                count+=(rt-lt+1);
            }
        }
        cout<<count<<endl;
    }
    return 0;
}