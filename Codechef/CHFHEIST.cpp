#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int T,D,d,P,Q,x,c=0;
	cin>>T;
	while(T--){
	    cin>>D>>d>>P>>Q;
	    x=D/d;
	    if(x%2==0){
	        c=c+d*((x/2)*(2*P+(x-1)*Q));
	    }
	    else{
	        c=c+d*(x*(P+((x-1)/2)*Q));
	    }
	    c=c+(D%d)*(P+(x)*Q);
	    cout<<c<<endl;
	    c=0;
	}
	return 0;
}
