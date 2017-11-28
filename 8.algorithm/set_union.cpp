#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<int>v1,v2;
	vector<int>v3(8);
	v1.push_back(10);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	
	v2.push_back(20);
	v2.push_back(30);
	v2.push_back(60);

	vector<int>::iterator iter_end;
	iter_end=set_union(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());

	for(vector<int>::iterator iter=v3.begin(); iter!= iter_end; ++iter)
		cout<< *iter<<" ";
	cout<<endl;

        for(vector<int>::iterator iter=v3.begin(); iter!= v3.end(); ++iter)
                cout<< *iter<<" ";
        cout<<endl;

	return 0;
}
