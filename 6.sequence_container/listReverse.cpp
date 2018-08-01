#include<iostream>
#include<list>
using namespace std;
int main()
{
	list<int> lt;
	lt.push_back(20);
	lt.push_back(30);
	lt.push_front(10);
	lt.push_back(40);
	
	list<int>::iterator iter;
	for(iter=lt.begin();iter!=lt.end();++iter)
		cout<<*iter<<' ';
	cout<<endl;

	lt.reverse();
	for(iter=lt.begin();iter!=lt.end();++iter)
		cout<<*iter<<' ';
	cout<<endl;
	return 0;

}
