// #include<bits/stdc++.h>
// using namespace std;

// void init_code() {
// // fast_io;
// #ifndef ONLINE_JUDGE

// freopen("input1.txt", "r", stdin);
// freopen("output1.txt", "w", stdout);

// #endif // ONLINE_JUDGE 
// }

// int main() {
//     init_code();
//     int t;
//     cin>>t;
//     while(t--){
//         int arr[8][8];
//         for(int i = 0 ; i < 8 ; i++){
//             for(int j= 0 ; j < 8 ; i++){
//                 cin>>arr[i][j];
//             } 
//         }
//         for(int i = 0 ; i < 8 ; i++){
//             for(int j= 0 ; j < 8-1 ; i++){
//                 if(arr[i][j] == arr[i][j+1]){
//                     if(arr[i][j+1] != arr[i][j+2]){
                        
//                     }
//                 }
//             } 
//         }

//     }
//     return 0;
// }










#include<bits/stdc++.h>
using namespace std;

// void init_code() {
// // fast_io;
// #ifndef ONLINE_JUDGE

// freopen("input1.txt", "r", stdin);
// freopen("output1.txt", "w", stdout);

// #endif // ONLINE_JUDGE 
// }
char solve(int arr[][8] , int r , int b){
    if(r == 0 || b == 0){
        if(r == 0){
            return 'B';
        }else return 'R';
    }
    if(r>b) return 'R';
    else  return 'B';
}
int main() {
    // init_code();
    int t;
    cin>>t;
    while(t--){
        int arr[8][8];
        int r = 0, b = 0;
        for(int i = 0 ; i < 8 ; i++){
            for(int j= 0 ; j < 8 ; i++){
                cin>>arr[i][j];
                if(arr[i][j] == 'R') r++;
                if(arr[i][j] == 'B') b++;
            } 
        }
        cout<<solve(arr,r,b)<<endl;
    }
    return 0;
}