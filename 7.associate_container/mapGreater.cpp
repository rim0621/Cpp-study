#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
	map<int, string, greater<int> > m;
	m[1]="one";
	m[3]="three";
	m[2]="two";
	m[4]="four";

	map<int,string,greater<int> >::iterator iter;
	for(iter=m.begin();iter!=m.end();++iter)
		cout<<(*iter).first <<","<< iter->second<<"  ";
	cout<<endl;
	return 0;
}
