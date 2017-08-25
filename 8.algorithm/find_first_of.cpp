#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	
	vector<int> v2;
	v2.push_back(40);
	v2.push_back(80);
	v2.push_back(20);
	
	vector<int>::iterator iter;
	iter=find_first_of(v1.begin(),v1.end(),v2.begin(),v2.end());
	if(iter!=v1.end())
		cout<<*iter<<endl;
	return 0;
}
