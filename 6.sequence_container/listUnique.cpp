#include<iostream>
#include<list>
using namespace std;

int main()
{
	list<int> lt;
	lt.push_back(10);
        lt.push_back(10);
        lt.push_back(10);
        lt.push_back(20);
        lt.push_back(30);
        lt.push_back(30);
        lt.push_back(10);

	list<int>::iterator iter;
	for(iter=lt.begin();iter!=lt.end();++iter)
		cout<<*iter<<' ';
	cout<<endl;

	lt.unique();
	for(iter=lt.begin();iter!=lt.end();++iter)
		cout<<*iter<<' ';
	cout<<endl;
	return 0;
}
