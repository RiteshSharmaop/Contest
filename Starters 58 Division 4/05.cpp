#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){;
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0 ; i < n ; i++){
            cin>>arr[i];
        }
        int mini = 0;
        sort(arr,arr+n);
        int count = 1;
        for(int i = 0 ; i < n ; i++){
            if(arr[i] != arr[i+1]){
                count = 1;
            }
            if(arr[i]==arr[i+1]){
                count++;
            }
            mini = max(mini,count);
            
        }
        cout<<mini -1 <<endl;

        
    }
    return 0;
}