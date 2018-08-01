#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(30);
	v.push_back(40);
	v.push_back(30);

	for(vector<int>::size_type i=0; i<v.size();++i)
		cout<<v[i]<<" ";
	cout<<endl;

	int n=count(v.begin(),v.end(),30);
	cout<<n<<endl;
	int ne=count(v.begin(),v.end(),20);
	cout<<ne<<endl;
	return 0;
}
