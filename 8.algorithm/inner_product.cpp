#include<iostream>
#include<vector>
#include<numeric>

using namespace std;

int main()
{
	vector<int> v1,v2,v3;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	
	v2.push_back(10);
	v2.push_back(10);
	v2.push_back(10);

	v3.push_back(100);
	
	cout<<inner_product(v1.begin(),v1.end(),v2.begin(),0)<<endl;
	//크기가 다르면 작은거에 맞추어 계산됨..
	cout<<inner_product(v1.begin(),v1.end(),v3.begin(),0)<<endl;
	return 0;
}
