#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool Pred(int left,int right)
{
	return 3 < right-left;
}

int main()
{
	vector<int> v;
        v.push_back(13);
        v.push_back(15);
        v.push_back(11);
        v.push_back(33);
        v.push_back(28);
        v.push_back(16);
        v.push_back(20);
	cout<<"original: ";
	for(vector<int>::size_type i=0; i<v.size();++i)
		cout<<v[i]<<" ";
	cout<<endl;
	
	cout<<"sort: ";
	sort(v.begin(),v.end(),Pred);
        for(vector<int>::size_type i=0; i<v.size();++i)
                cout<<v[i]<<" ";
        cout<<endl;

	if(binary_search(v.begin(),v.end(),28,Pred))
		cout<<"28 ok"<<endl;
	else
		cout<<"no"<<endl;

	return 0;
}
