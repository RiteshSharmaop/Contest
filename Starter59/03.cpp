#include<bits/stdc++.h>
using namespace std;
bool solve(int maxi){
    if(maxi>2) return true;
    else return false;
}
int main() {
    int t;
    cin>>t;
    while(t--){;
        string s;
        cin>>s;
        int maxi = INT32_MIN;
        for(int i = 0 ; i < s.length() ; i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                int count = 0;
                for(int j = i ; j< s.length() ; j++){
                    if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'){
                        count++;
                    }else break;
                }
                maxi = max(maxi,count);
            }
        }
        if(solve(maxi)) cout<<"Happy"<<endl;
        else cout<<"Sad"<<endl;
        
        
        
    }
    return 0;
}