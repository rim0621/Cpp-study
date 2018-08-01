#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void Print(int n)
{
	cout<<n<<" ";
}
int main()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);

	for_each(v.begin(),v.end(),Print);
	cout<<endl;
	for_each(v.begin(),v.begin()+2,Print);
	cout<<endl;
	return 0;
}
