#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<int> v1,v2;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	
	v2.push_back(20);
	v2.push_back(50);

	vector<int> v3(10);
	vector<int>::iterator iter_end;
	iter_end=set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());
	cout<<"set_intersection()"<<endl;
	for(vector<int>::iterator iter=v3.begin();iter!=iter_end;++iter)
		cout<<*iter<<" ";
	cout<<endl;
	for(vector<int>::iterator iter=v3.begin();iter!=v3.end();++iter)
		cout<<*iter<<" ";
	cout<<endl;

        iter_end=set_difference(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());
        cout<<"set_difference()"<<endl;
        for(vector<int>::iterator iter=v3.begin();iter!=iter_end;++iter)
                cout<<*iter<<" ";
        cout<<endl;
        for(vector<int>::iterator iter=v3.begin();iter!=v3.end();++iter)
                cout<<*iter<<" ";
        cout<<endl;


        iter_end=set_symmetric_difference(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());
        cout<<"set_symmetric_difference()"<<endl;
        for(vector<int>::iterator iter=v3.begin();iter!=iter_end;++iter)
                cout<<*iter<<" ";
        cout<<endl;
        for(vector<int>::iterator iter=v3.begin();iter!=v3.end();++iter)
                cout<<*iter<<" ";
        cout<<endl;

	return 0;
}
