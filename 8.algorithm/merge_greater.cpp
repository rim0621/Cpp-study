#include<iostream>
#include<functional>
#include<vector>
#include<algorithm>
using namespace std;
template<typename T>
struct Greater
{
	bool operator() (const T& left, const T& right) const
	{
		return left>right;
	}
};
int main()
{
	vector<int> v1;
        v1.push_back(50);
        v1.push_back(10);

	vector<int> v2;
        v2.push_back(60);
        v2.push_back(40);
        v2.push_back(30);
        v2.push_back(20);

	vector<int> v3(10);
	vector<int>::iterator iter_end;
	iter_end=merge(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin(),Greater<int>());
	for(vector<int>::size_type i=0; i<v3.size();++i)
		cout<<v3[i]<<" ";
	cout<<endl;
	return 0;


}
