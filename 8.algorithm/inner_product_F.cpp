#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
int Plus(int left, int right)
{
	return left + right;
}
int Minus(int left, int right)
{
	return left - right;
}
int main()
{
	vector<int> v1,v2;
	for(int i=1;i<=5;i++)
	{
		v1.push_back(i*10);
	}
	for(int i=1;i<=5;i++)
	{
		v2.push_back(2);
	}
	cout<<inner_product(v1.begin(),v1.end(),v2.begin(),0,Plus,Minus) <<endl;

	// 0+10-2+20-2.....
	


	return 0;
}
