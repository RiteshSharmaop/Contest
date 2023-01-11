#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    x = x*z;
	    y = y*z;
	    cout<<x-y<<endl;
	}
	return 0;
}
