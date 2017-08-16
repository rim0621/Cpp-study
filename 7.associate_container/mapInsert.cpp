#include<iostream>
#include<map>
using namespace std;

int main()
{
	map<int,int> m;
	m.insert(pair<int,int>(5,100));
        m.insert(pair<int,int>(1,100));
        m.insert(pair<int,int>(4,40));
        m.insert(pair<int,int>(3,30));
        m.insert(pair<int,int>(6,10));
	
	pair<int,int> pr(7,20);
	m.insert(pr);
	map<int,int>::iterator iter;
	for(iter=m.begin();iter!=m.end();++iter)
		cout<<"("<<(*iter).first<<","<<(*iter).second<<")"<<" ";
	cout<<endl;

	for(iter=m.begin();iter!=m.end();++iter)
		cout<<"("<<iter->first<<","<<iter->second<<")"<<" ";
	cout<<endl;
	return 0;
}
