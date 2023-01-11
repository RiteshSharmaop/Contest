#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int mini = min(x,y);
        int maxi = max(x,y);
        int count = 0;
        for(int i = mini ; i<=maxi ; i++){
            count++;
        }
        cout<<count/2<<endl;;
    }
    return 0;
}