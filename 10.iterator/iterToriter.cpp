#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);

	reverse_iterator<vector<int>::iterator> rbiter(v.end());
	reverse_iterator<vector<int>::iterator> reiter(v.begin());

	cout<<"v[rbiter, reiter) : ";
	for(;rbiter!=reiter;++rbiter)
		cout<<*rbiter<<" ";
	cout<<endl;
	for(vector<int>::reverse_iterator riter=v.rbegin(); riter!=v.rend();riter++)
		cout<<*riter<<" ";
	cout<<endl;	
	return 0;
}
