#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string s1,s2;
    cin>>s1>>s2;
    int l1 = s1.size();
    int l2 = s2.size();
    cout<<l1<<" "<<l2<<endl;
    string s3 = s1+s2;
    cout<<s3<<endl;
    char c0;
    c0 = s1[0];
    s1[0]=s2[0];
    s2[0]=c0;
    cout<<s1<<" "<<s2<<endl; 
  
    return 0;
}
