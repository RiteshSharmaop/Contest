#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d,f,s;
        cin>>a>>b>>c>>d;
        f = max(a,b);
        s = max(c,d);
        cout<<f+s<<endl;
    }
    return 0;
}