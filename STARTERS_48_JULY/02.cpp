#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,m;
        cin>>n>>k>>m;
        int i = 1;
        while(n>i*m*k){
            i++;
        }
        cout<<i<<endl;
    }
    return 0;
}