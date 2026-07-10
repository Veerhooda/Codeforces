#include <vector>
#include <cstdint>
#include <iostream>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    vector<int> num;
    for(int i=0;i<n;i++){
        int u;
        cin>>u;
        u=abs(u);
        num.push_back(u);
    }
    int min=INT32_MAX;
    for(int i=0;i<n;i++){
        if(num[i]<min){
            min=num[i];
        }
    }
    cout<<min<<endl;
}