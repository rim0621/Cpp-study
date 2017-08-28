#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool Pred(int n)
{
	return 30<=n&&n<=50;
}

int main()
{
	vector<int> v;
        v.push_back(10);
        v.push_back(30);
        v.push_back(40);
        v.push_back(50);
        v.push_back(60);

	replace_if(v.begin(),v.end(),Pred,0);

	for(vector<int>::size_type i=0; i<v.size();++i)
		cout<<v[i]<<" ";
	cout<<endl;
	return 0;
}
