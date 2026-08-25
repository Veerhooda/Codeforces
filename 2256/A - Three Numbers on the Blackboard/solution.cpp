#include <iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int a,b,c;
cin>>a>>b>>c;
if(a+b<c){
c=a+b;
}
if(b+c<a){
a=c+b;
}
if(c+a<b){
b=a+c;
}
cout<<max({a,b,c})-min({a,b,c})<<endl;
}
}