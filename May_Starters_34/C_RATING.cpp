#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t!=0){
	    int i = 0;
	    int x,y;
        cin>>x>>y;
        while(x<y){
            x = x +8;
            i++;
        }
        cout<<i<<endl;
	    t--;
	}
	return 0;
}
