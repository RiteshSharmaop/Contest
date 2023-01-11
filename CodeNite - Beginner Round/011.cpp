#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){;
    
    int n,m;
    cin>>m>>n;
    int arrm[m];
    int arrn[n];
    for(int i = 0 ; i< m ; i++){
        cin>>arrm[i];
    }
    for(int i = 0 ; i< n; i++){
        cin>>arrn[i];
    }
    

    sort(arrm ,arrm + m );
    sort(arrn ,arrn + n );
    for(int i = n-1 ; i >=0 ; i--){
        for(int j = m-1 ; j >=0 ; j-- ){
            if(arrn[i] == arrm[j]) {
                arrn[i] = 0;

            }
        }
    }
    cout<< " { ";
    for(int k = 0 ; k < n ; k++){
        cout<< arrn[k]<<" ";
                }

    cout<< " } "<<endl;
    int count = 0;


    for(int i = 0 ; i < n ; i++){
        if(arrn[i] == 0){
            count++;
        }
    }
    if(count == n) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    }
    return 0;
}

// 3
// 5 3
// 5 1 3 2 9
// 9 3 1
// 5 3
// 2 1 1 1 1
// 1 2 2
// 5 4
// 5 1 3 2 9
// 9 3 1 8


