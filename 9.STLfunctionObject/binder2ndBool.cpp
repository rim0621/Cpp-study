#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	vector<int> v1;
	for(int i=1;i<=5;i++)
		v1.push_back(10*i);
	cout<<"20보다 작은 원소의 개수: "<<count_if(v1.begin(),v1.end(),bind2nd<less<int> >(less<int>(), 20))<<endl;

	cout<<"20보다 작거나 같은 원소의 개수: "<<count_if(v1.begin(),v1.end(),bind2nd<less_equal<int> >(less_equal<int>(), 20))<<endl;

	return 0;
}
