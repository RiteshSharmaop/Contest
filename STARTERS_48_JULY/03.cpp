#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,x,y;
        cin>>n>>k>>x>>y;
        int a = n-k;
        if(a==0){
            cout<<k*x<<endl;
        }else{
            if(x>=y){
                k = k*x;
                a = a*y;
                cout<<k+a<<endl;
            }else{
                cout<<x*n<<endl;
            }
        }
    }
    return 0;
}