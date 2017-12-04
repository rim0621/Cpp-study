#include<iostream>
#include<algorithm>
#include<vector>
#include<iterator>
using namespace std;

int main()
{
	vector<int> v1,v2;
	int i=0;
	while(i<6)
	{
		i++;
		v1.push_back(i*10);
	}
	v2.push_back(100);
	copy(v1.begin(),v1.end(),inserter<vector<int> >(v2,v2.begin()));

	for(vector<int>::iterator iter=v2.begin();iter!=v2.end();iter++)
		cout<<*iter<<" ";
	cout<<endl;
	return 0;
}
