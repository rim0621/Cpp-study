#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<int> v;
	v.push_back(10);
        v.push_back(20);
        v.push_back(30);
        v.push_back(40);
        v.push_back(50);

	vector<int>::iterator m=v.begin()+1;
	rotate(v.begin(),m,v.end());
	for(vector<int>::size_type i=0; i<v.size();++i)
		cout<<v[i]<<" ";
	cout<<endl;
        rotate(v.begin(),m,v.end());
        for(vector<int>::size_type i=0; i<v.size();++i)
                cout<<v[i]<<" ";
        cout<<endl;
        rotate(v.begin(),m,v.end());
        for(vector<int>::size_type i=0; i<v.size();++i)
                cout<<v[i]<<" ";
        cout<<endl;
        rotate(v.begin(),m,v.end());
        for(vector<int>::size_type i=0; i<v.size();++i)
                cout<<v[i]<<" ";
        cout<<endl;
        rotate(v.begin(),m,v.end());
        for(vector<int>::size_type i=0; i<v.size();++i)
                cout<<v[i]<<" ";
        cout<<endl;
	return 0;

}
