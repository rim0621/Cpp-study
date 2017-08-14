#include<iostream>
#include<set>
using namespace std;

int main()
{
	multiset<int> ms;
	multiset<int>::iterator iter;

	ms.insert(40);
	ms.insert(50);
	ms.insert(40);
	ms.insert(10);
	ms.insert(30);
	ms.insert(40);
	iter=ms.insert(10);
	cout<<"iter :"<<*iter<<endl;
	for(iter=ms.begin();iter!=ms.end();++iter)
		cout<<*iter<<" ";
	cout<<endl;
	return 0;
}
