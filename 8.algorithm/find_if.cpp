#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool Pred(int n)
{
	return 35<n;
}

int main()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	for(vector<int>::size_type i=0;i<v.size();++i)
	{
		cout<<v[i]<< " ";
	}
	cout<<endl;

	vector<int>::iterator iter;
	iter=find(v.begin(),v.end(),20);
	if(iter!=v.end())
		cout<<*iter<<"find"<<endl;
	
	iter=find_if(v.begin(),v.end(),Pred);
	if(iter!=v.end())
		cout<<*iter<<"find"<<endl;
	return 0;

}
