#include<iostream>
#include<set>
using namespace std;
int main()
{
	multiset<int> ms;
	ms.insert(30);
	ms.insert(10);
	ms.insert(50);
	ms.insert(20);
	ms.insert(40);
	ms.insert(10);
	ms.insert(30);

	multiset<int>::iterator iter;
	for(iter=ms.begin();iter!=ms.end();++iter)
		cout<<*iter<<" ";
	cout<<endl;
	cout<<"30 원소의 개수:"<<ms.count(30)<<endl;

	iter=ms.find(30);
	cout<<"iter: "<< *iter<<endl;

	multiset<int>::iterator lower;
	multiset<int>::iterator upper;

	lower=ms.lower_bound(10);
	upper=ms.upper_bound(40);
	cout<<"lower: "<<*lower<<endl;
	cout<<"upper: "<<*upper<<endl;

	for(iter=lower;iter!=upper;++iter)
		cout<<*iter<<"	";
	cout<<endl;
	return 0;

}
