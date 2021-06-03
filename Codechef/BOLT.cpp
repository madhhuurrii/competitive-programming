#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	float T,k1,k2,k3,v,sum;
	cin>>T;
	for(int i=0;i<T;i++){
	    cin>>k1>>k2>>k3>>v;
	    sum= k1*k2*k3*v;
	   
	     sum= 100/sum; 
	     sum = round(sum*100)/100;
	     if((float)sum < (float)9.58)
          {  cout<<"YES\n";  }
          else
          {   cout<<"NO\n";  }

	    
	}
	return 0;
}