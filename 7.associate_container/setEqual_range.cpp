#include<iostream>
#include<set>
using namespace std;

int main()
{
	set<int> s;
	s.insert(30);
	s.insert(50);
	s.insert(20);
	s.insert(10);
	s.insert(40);
	
	set<int>::iterator iter;
	for(iter=s.begin();iter!=s.end();++iter)
		cout<<*iter<<" ";
	cout<<endl;

	pair<set<int>::iterator,set<int>::iterator> iter_pair;

	iter_pair=s.equal_range(30); //30~40
	cout<<*iter_pair.first<<endl;
	cout<<*iter_pair.second<<endl;

	iter_pair=s.equal_range(55);
	if(iter_pair.first!=iter_pair.second)
		cout<<" yes"<<endl;
	else
		cout<<"no"<<endl;
	return 0;
}
