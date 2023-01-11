#include<bits/stdc++.h>
using namespace std;
int smaller(int arr[],string str,int n){
    int mini = 120;
    for(int i = 0 ; i< n ; i++){
            if(str[i] == '1'){
                if(i==0){
                    return arr[0];
                }
                return mini;
            }
            mini = min(arr[i],mini);
    }
    return mini;
}
int main(){
    int t;