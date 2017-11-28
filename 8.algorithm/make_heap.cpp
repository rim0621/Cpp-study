#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<int> v;
	v.push_back(3);
        v.push_back(2);
      v.push_back(4);
      v.push_back(5);
      v.push_back(1);
      v.push_back(12);
     v.push_back(11);
     v.push_back(10);
     v.push_back(6);
     v.push_back(9);
     v.push_back(7);
     v.push_back(8);

	make_heap(v.begin(),v.end(),greater<int>());
	cout<<"make heap: ";
	for(vector<int>::size_type i=0; i<v.size();++i)
		cout<<v[i]<<" ";
	cout<<endl;
	return 0;
}
