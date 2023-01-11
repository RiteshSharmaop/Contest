#include <iostream>
using namespace std;

int main() {
    int a,b,n;
	cin>>n>>a>>b;
	a = n-a;
	n = a-b;
	cout<<a<<" "<<n<<endl;
	
	return 0;
}
