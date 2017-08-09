#include<iostream>
#include<list>
using namespace std;

struct Greater
{
	bool operator() (int left, int right) const
	{
		return left>right;
	}
};
int main()
{
	list<int> lt;
	lt.push_back(30);
	lt.push_back(50);
	lt.push_back(20);
	lt.push_back(40);
	lt.push_back(10);
	list<int>::iterator iter;
	lt.sort(greater<int>());
	for(iter=lt.begin();iter!=lt.end();++iter)
		cout<<*iter<<' ';
	cout<<endl;
        lt.sort(less<int>());
        for(iter=lt.begin();iter!=lt.end();++iter)
                cout<<*iter<<' ';
        cout<<endl;


        lt.sort(Greater());
        for(iter=lt.begin();iter!=lt.end();++iter)
                cout<<*iter<<' ';
        cout<<endl;

	return 0;
}
