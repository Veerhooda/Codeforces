#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n%2!=0 or n<4){
            cout<<-1<<endl;
        }
        else{
            long long min=(n+5)/6;
            long long max=n/4;
            cout<<min<<" "<<max<<endl;
        }
    }
}