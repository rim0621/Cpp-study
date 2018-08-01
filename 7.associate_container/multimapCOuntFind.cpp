#include<iostream>
#include<map>
using namespace std;

int main()
{
	multimap<int,int> mm;
	mm.insert(pair<int,int>(2,20));
        mm.insert(pair<int,int>(3,20));
        mm.insert(pair<int,int>(5,30));
        mm.insert(pair<int,int>(1,60));
        mm.insert(pair<int,int>(2,40));
        mm.insert(pair<int,int>(4,20));
        mm.insert(pair<int,int>(6,10));
	
	multimap<int,int>::iterator iter;
	for(iter=mm.begin();iter!=mm.end();++iter)
		cout<<iter->first<<","<<iter->second<<" ";
	cout<<endl;

	cout<<"key 2 count="<<mm.count(2)<<endl;

	iter=mm.find(2);
	if(iter!=mm.end())
		cout<<iter->first <<"="<<iter->second<<endl;

	return 0;
}
