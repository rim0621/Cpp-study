#include<iostream>
#include<set>
using namespace std;

int main()
{
	multiset<int> ms;
	ms.insert(50);
	ms.insert(30);
	ms.insert(50);
	ms.insert(40);
	ms.insert(10);
	ms.insert(20);
	ms.insert(50);

	multiset<int>::iterator iter;
	for(iter=ms.begin(); iter !=ms.end();++iter)
		cout<<*iter<<" ";
	cout<<endl;
	pair<multiset<int>::iterator, multiset<int>::iterator> iter_pair;
	iter_pair=ms.equal_range(50);
	for(iter=iter_pair.first; iter!=iter_pair.second;++iter)
		cout<<*iter<<" ";
	cout<<endl;

	return 0;

}
