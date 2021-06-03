#include <iostream>
using namespace std;

int main() {
	int T, H,P;
	cin>>T;
	for(int i=0;i<T;i++)
	{ cin>>H>>P;
	do
	{
	H=H-P;
	P=P/2;} while((H>0)&&(P>0));
	if (H<=0)
	{cout<<"\n"<<1;}
	else
	cout<<"\n"<<0;
	}

	return 0;
}