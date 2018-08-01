#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
int Plus(int left, int right)
{
	return left + right;
}

int main()
{
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	vector<int> v2(5);

	vector<int>::iterator iter_end;
	iter_end=adjacent_difference(v1.begin(),v1.end(),v2.begin(),Plus);
	for(vector<int>::iterator iter=v2.begin(); iter!=iter_end;++iter)
		cout<<*iter<<" ";
	cout<<endl;
	return 0;
}
