#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	vector<int> v;
	v.push_back(10);
        v.push_back(20);
        v.push_back(30);
        v.push_back(40);
        v.push_back(50);

	vector<int> v1(5);
	vector<int>::iterator iter;
	iter=copy(v.begin(),v.end(),v1.begin());
	cout<< "v1 last : " << *(iter-1)<<endl;
	cout<<"v: ";
	for(vector<int>::size_type i=0; i<v.size();++i)
		cout<<v[i]<<" ";
	cout<<endl;
	cout<<"v1: ";
	for(vector<int>::size_type i=0; i<v1.size();++i)
		cout<<v1[i]<<" ";
	cout<<endl;
	return 0;
}
