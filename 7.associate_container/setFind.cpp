#include<iostream>
#include<set>
using namespace std;

int main()
{
	set<int> s;
	s.insert(40);
	s.insert(30);
	s.insert(60);
	s.insert(50);
	s.insert(10);
	s.insert(20);

	set<int>::iterator iter;
	for(iter=s.begin();iter!=s.end();++iter)
		cout<<*iter<<" ";
	cout<<endl;

	iter = s.find(10);
	if(iter!=s.end())
		cout<<"ok : "<<*iter<<endl;
	else
		cout<<"no"<<endl;
	iter=s.find(100);
	if(iter!=s.end())
		cout<<"ok : "<<*iter<<endl;
	else
		cout<<"no"<<endl;
	return 0;

}
