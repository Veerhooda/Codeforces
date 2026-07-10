#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long>a(n);
        for (int i=0;i<n;i++) {
            cin>>a[i];
        }
        long long b=0;
        for(int i=1;i<n;i++){
            b+=a[i];
        }
        long long c=-b;
        long long d=0;
        for (int i=1;i<n;i++){
            b-=a[i];
            long long e = a[0] + d - b;
            if (e>c) {
                c=e;
            }
            d+=abs(a[i]);
        }
        cout<<c<<endl;
    }
}