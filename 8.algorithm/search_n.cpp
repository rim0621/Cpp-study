#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<int>v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(30);
	v1.push_back(30);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	v1.push_back(30);
	v1.push_back(50);

	vector<int>::iterator iter;
	iter=search_n(v1.begin(),v1.end(),3,30);
	if(iter!=v1.end())
	{
		cout<<*iter<<endl;
		cout<<*(iter-1)<<endl;
		cout<<*(iter+1)<<endl;
		
	}
	return 0;
}

