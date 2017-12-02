#include<iostream>
#include<algorithm>
#include<numeric>
#include<vector>
using namespace std;

bool Pred(int n)
{
	return 30<= n && n<=40;
}

int main()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	cout<<"조건에 맞는:"<<count_if(v.begin(),v.end(),Pred)<<endl;
	cout<<"조건에 안  :"<<count_if(v.begin(),v.end(),not1(ptr_fun(Pred)))<<endl;
	return 0;
}
