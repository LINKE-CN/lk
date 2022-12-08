#include<iostream>
using namespace std;
int main()
{
    int n,s,p,g,h1,h2;
    cin>>n;
    p=n,g=n,s=n;
    while(p>=2||g>=4)
    {
    	h1=p/2;
    	h2=g/4;
    	p=p-2*h1+h1+h2;
    	g=g-4*h2+h1+h2;
    	s=s+h1+h2;
	}
	cout<<s<<endl;
	return 0;
}
