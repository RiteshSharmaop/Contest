#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t!=0){
	    int w,x,y,z;
	    cin>>w;
	    cin>>x;
	    cin>>y;
	    cin>>z;
	    if(x==w+(y*z)){
	        cout<<"filled"<<endl;
	    }else if(x<w+(y*z)){
	        cout<<"overFlow"<<endl;
	    }else{
	        cout<<"Unfilled"<<endl;
	    }
	    
	    t--;
	}
	return 0;
}
