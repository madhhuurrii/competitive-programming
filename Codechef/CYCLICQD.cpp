#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,A,B,C,D;
	cin>>T;
	while(T--){
	    cin>>A>>B>>C>>D;
	    A=A+C;
	    B=B+D;
	    if((A==180) & (B==180)){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}