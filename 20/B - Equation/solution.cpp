#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<iomanip>
#define int long long
using namespace std;
signed main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a==0){
        if(b==0){
            if(c==0){
                cout<<-1<<endl;
            }else{
                cout<<0<<endl;
            }
        }else{
            cout<<1<<endl;
            cout<<fixed<<setprecision(10)<<-(double)c/b;
        }
        return 0;
    }
    int D=(b*b)-4*a*c;
    if(D<0)cout<<0;
    else if(D==0){
        double x=-(double)b/(2.0*a);
        cout<<1<<endl;
        cout<<fixed<<setprecision(10)<<x;
    }else{
        double d=sqrt(D);
        double e=(-b+d)/(2.0*a);
        double f=(-b-d)/(2.0*a);
        cout<<2<<endl;
        cout<<fixed<<setprecision(10)<<min(f,e)<<endl;
        cout<<fixed<<setprecision(10)<<max(e,f)<<endl;
    }
    return 0;
}