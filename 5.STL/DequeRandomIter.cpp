#include<iostream>
#include<deque>
using namespace std;

int main()
{
	deque<int> dp;

	dp.push_back(10);
        dp.push_back(20);
        dp.push_back(30);
        dp.push_back(40);
        dp.push_back(50);

	deque<int>::iterator iter=dp.begin();
	for (iter;iter!=dp.end();++iter)
		cout<<*iter<<endl;

	iter-=2;

	cout<<*iter<<endl;
	return 0;
}

