
//find(), lower_bound(), upper_bound(),equal_range()


#include<iostream>
#include<map>
using namespace std;

int main()
{
	map<int,int> m;
	m[5]=500;
	m[6]=600;
	m[1]=11;
	m[2]=22;
	m[4]=33;
	m[3]=33;
	map<int,int>::iterator iter;
	for(iter=m.begin();iter!=m.end();++iter)
		cout<<iter->first<<","<<iter->second<<" ";
	cout<<endl;

	iter=m.find(5);
	if(iter!=m.end())
		cout<<"key"<<iter->first<<"-"<<iter->second<<endl;

	map<int,int>::iterator lower;
	map<int,int>::iterator upper;
	lower=m.lower_bound(5);
	upper=m.upper_bound(5);
	for(iter=lower;iter!=upper;++iter)
		cout<<iter->first<<","<<iter->second<<"  ";
	cout<<endl;

        lower=m.lower_bound(3);
        upper=m.upper_bound(5);
        for(iter=lower;iter!=upper;++iter)
                cout<<iter->first<<","<<iter->second<<"  ";
        cout<<endl;

	pair<map<int,int>::iterator,map<int,int>::iterator> iter_pair;
	iter_pair=m.equal_range(5);
	for(iter=iter_pair.first;iter!=iter_pair.second;++iter)
		cout<<iter->first<<","<<iter->second<<"  ";
	cout<<endl;
	return 0;
}
