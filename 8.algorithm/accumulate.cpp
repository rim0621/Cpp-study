#include<iostream>
#include<vector>
#include<numeric>

using namespace std;

int main()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	cout<<accumulate(v.begin(),v.end(),0)<<endl;
	cout<<accumulate(v.begin(),v.end(),accumulate(v.begin(),v.end(),0))<<endl;
	return 0;
}	
