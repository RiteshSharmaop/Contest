#include<bits/stdc++.h>
using namespace std;
int ans(int x,int y){
    int ans = 0;
    if(x>y){
        x = x*2;
        x = x-2;
        y = y-2;
        if(y<0){
            y = 0;
        }
        ans = x+y;
    }
    if(x<y){
        x = x-1;
        x = x*2;
        ans = y+x;
    }
    if(x == y){
        x = x*2;
        x = x -2;
        y = y-2;
        ans = x+y;
        if(ans<0){
            return 0;
        }
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        cout<<ans(x,y)<<endl;
    }
    
    return 0;
}