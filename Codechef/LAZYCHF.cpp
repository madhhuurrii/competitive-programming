#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int T,x=0,m=0,d=0;
	cin>>T;
	while(T--){
	    cin>>x>>m>>d;
	    m=m*x;
	    d=d+x;
	    
	    cout<<min(m,d)<<endl;
	}
	return 0;
}