#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	
	vector<int>::iterator iter=v.begin();
	iter+=2;
	cout<<*iter<<endl;
	
	iter+=2;
	cout<<*iter<<endl;
	return 0;
}
