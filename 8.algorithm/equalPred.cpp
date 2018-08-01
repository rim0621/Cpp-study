#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool Pred(int left,int right)
{
	return abs(right-left) <5;
}

int main()
{
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);

	vector<int> v2;
	v2.push_back(11);
	v2.push_back(22);
	v2.push_back(34);
//	v2.push_back(40);
	if(equal(v1.begin(),v1.end(),v2.begin(),Pred))
		cout<<"ok"<<endl;
	else
		cout<<"no"<<endl;
	return 0;

}
