#include <iostream>
using namespace std;

int main() {
	int T,d,x,y,z;
	cin>>T;
	while(T--){
	    cin>>d>>x>>y>>z;
	    int a=7;
	    x=x*a;
	    y=y*d;
	    z=z*(a-d);
	    y=y+z;
	    if(y>x){
	        cout<<y<<endl;
	    }
	    else{
	        cout<<x<<endl;
	    }
	}
	return 0;
}