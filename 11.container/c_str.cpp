#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s("Hello");
	const char* sz;
	const char *buf;
	sz=s.c_str();
	buf=s.data();

	for(int i=0;i<=5;i++)
	{
		if(sz[i]=='\0')
			cout<<"T"<<endl;
		if(s[i]=='\0')
			cout<<"TT"<<endl;
	}
	return 0;

}
