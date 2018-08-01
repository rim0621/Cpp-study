
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);

	for(vector<int>::size_type i=0; i<v.size();++i)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
	v[0]=100;
	v[2]=300;
	for(vector<int>::size_type i=0;i<v.size();++i)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;

	v.at(0)=1000;
	v.at(2)=3000;
	for(vector<int>::size_type i=0; i<v.size();++i)
	{
		cout<<v.at(i)<<" ";
	}
	cout<<endl;

	return 0;

}
