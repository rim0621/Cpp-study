#include<iostream>
#include<set>
using namespace std;

int main()
{
	set<int> s;
	s.insert(50);
	s.insert(40);
	s.insert(10);
	s.insert(20);
	s.insert(30);
	set<int>::iterator iter;
	for(iter=s.begin();iter!=s.end();++iter)
		cout<<*iter<<" ";
	cout<<endl;
	
	set<int>::iterator iter_lower=s.lower_bound(20);
	set<int>::iterator iter_upper=s.upper_bound(20);
	cout<<*iter_lower<<endl;
	cout<<*iter_upper<<endl;
	
	if(iter_lower!=iter_upper)
		cout<<"diff"<<endl;
	else
		cout<<"same"<<endl;


	iter_lower=s.lower_bound(100);
	iter_upper=s.upper_bound(100);
	if(iter_lower!=iter_upper)
		cout<<"있다."<<endl;
	else
		cout<<"없다."<<endl;
	return 0;
}
