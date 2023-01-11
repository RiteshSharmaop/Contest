#include<bits/stdc++.h>
using namespace std;

void init_code() {
// fast_io;
#ifndef ONLINE_JUDGE

freopen("input1.txt", "r", stdin);
freopen("output1.txt", "w", stdout);

#endif // ONLINE_JUDGE 
}

int main() {
    init_code();
    int t;
    cin>>t;
    while(t--){
        int a, b ,c;
        cin>>a>>b>>c;
        if(a>=b && a >= c){
            if((b+c) == a) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }else if(b>=a && b>=c){
            if((a+c)== b) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }else {
            if((a+b)==c)cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
    return 0;
}