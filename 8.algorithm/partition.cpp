#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool Pred(int n)
{
	return n<40;
}

int main()
{
	vector<int> v;
	v.push_back(50);
	v.push_back(40);
	v.push_back(20);
	v.push_back(10);
	v.push_back(60);

	vector<int>::iterator iter_sep;
	iter_sep=partition(v.begin(),v.end(),Pred);

	cout<<"40 less:";//t
	for(vector<int>::iterator iter=v.begin();iter!=iter_sep;++iter)
		cout<<*iter<<" ";
	cout<<endl;
	
	cout<<"40 over:";//f
	for(vector<int>::iterator iter=iter_sep;iter!=v.end();++iter)
		cout<<*iter<<" ";
	cout<<endl;
	return 0;

}
