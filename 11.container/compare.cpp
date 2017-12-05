#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1("ABCD");
	string s2("BACD");
	const char* sz="BACD";

	cout<<s1.compare(s2)<<endl;
	cout<<s1.compare(2,2,s2)<<endl;
	cout<<s1.compare(sz)<<endl;
	cout<<s2.compare(sz)<<endl;
	return 0;
}
