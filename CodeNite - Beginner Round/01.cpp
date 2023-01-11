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
    
    for(int i = 0 ; i < m ; i++){
        cout<<"m : " <<arrm[i]<<" "<<endl;;
        for(int j = 0 ; j < n ; j++){
            cout<<"n : " <<arrn[j]<<" ";
            if(arrn[j] == arrm[i]){
                arrn[j] = 0;
                cout<<"After n : " <<arrn[j]<<" "<<endl;;
                cout<<" [ ";
                for(int k = 0 ; k < n ; k++){
                    cout<< arrn[k]<<" ";
                }
                cout<<" ] "<<endl;;
                break;
            }
        }
        cout<<endl;
    }
    cout<<endl;
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


