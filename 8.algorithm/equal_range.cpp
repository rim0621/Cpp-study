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
	v.push_back(30);
	v.push_back(40);
	pair<vector<int>::iterator, vector<int>::iterator> iter_pair;
	iter_pair = equal_range(v.begin(),v.end(),30);
	for(vector<int>::iterator iter=iter_pair.first; iter!= iter_pair.second;++iter)
		cout<< *iter<<" ";
	cout<<endl;
	iter_pair=equal_range(v.begin(),v.end(),33);	
	//없으면 first 랑 second가 40 을 가리킴
	cout<<*iter_pair.first<<" "<<*iter_pair.second<<endl;
	return 0;
}
