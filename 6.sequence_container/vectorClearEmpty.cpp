#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> v(3);
	v[0]=10;
	v[1]=20;
	v[2]=30;
	for(vector<int>::size_type i=0; i<v.size(); i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
	cout<<"size: "<<v.size()<<" capacity: " <<v.capacity()<<endl;

	v.clear();
	cout<< "size: "<<v.size()<<" capacity: " <<v.capacity()<<endl;
	if(v.empty())
	{
		cout<<" no "<<endl;
	}
	return 0;
}
