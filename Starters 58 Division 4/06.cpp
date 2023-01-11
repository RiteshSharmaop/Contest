#include <iostream>
using namespace std;
bool solve(int n , string s){
    for(int i = 0 ; i < n ; i++){
	        int k = i+3;
	        string str = "";
	        for(int j = i ; j < k ; j++){
	            str.push_back(s[j]);
	        }
            if(str == "101" || str == "010"){
                return true;
            }
	    }
        return false;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int n = s.length();
	    
        if(solve(n,s)) cout << "Good"<<endl;
        else cout<< "Bad"<<endl;
	}
	return 0;
}
