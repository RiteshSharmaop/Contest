#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        if(n==1&&m==1){
            cout<<m<<endl;
        }else if(n%2==0&&m%2==0){
            cout<<0<<endl;
        }else if(n%2==0){
            cout<<n<<endl;
        }else if(m%2==0){
            cout<<m<<endl;
        }else{
            n = n+m;
            cout<<n-1<<endl;
        }
    }
    return 0;
}