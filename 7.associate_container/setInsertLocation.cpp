#include<iostream>
#include<set>
using namespace std;

int main()
{
	set<int> s;
	pair<set<int>::iterator, bool> pr;

	s.insert(20);
	s.insert(10);
	s.insert(50);
	s.insert(30);
	pr=s.insert(40);

	set<int>::iterator iter;
	for(iter=s.begin();iter!=s.end();++iter)
		cout<<*iter<<" ";
	cout<<endl;

	s.insert(pr.first,35);	//find from 40
        for(iter=s.begin();iter!=s.end();++iter)
                cout<<*iter<<" ";
        cout<<endl;
	return 0;


	
}
