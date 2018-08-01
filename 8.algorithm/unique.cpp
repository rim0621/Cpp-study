#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<int> v;
        v.push_back(10);
        v.push_back(10);
        v.push_back(20);
        v.push_back(20);
        v.push_back(20);
        v.push_back(30);
        v.push_back(30);
        v.push_back(30);

	vector<int>::iterator iter_end;
	iter_end=unique(v.begin(),v.end());
	for(vector<int>::size_type i=0;i<v.size();++i)
		cout<<v[i]<<" ";
	cout<<endl;
	for(vector<int>::iterator iter=v.begin();iter!=iter_end;++iter)
		cout<<*iter<<" ";
	cout<<endl;

	v.erase(iter_end,v.end());
	for(vector<int>::size_type i=0;i<v.size();++i)
		cout<<v[i]<<" ";
	cout<<endl;

	return 0;
}
