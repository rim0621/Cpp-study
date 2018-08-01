#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int a=10, b=20;
	vector<int> v;
	v.push_back(10);
	v.push_back(20);

	vector<int>::iterator p=v.begin();
	vector<int>::iterator q=v.begin()+1;
	cout<< v[0] << ","<< v[1]<<endl;
	iter_swap(p,q);
	cout<<v[0]<<","<<v[1]<<endl;
	return 0;	
}
