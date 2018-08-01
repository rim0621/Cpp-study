#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
using namespace std;

int main()
{
	vector<int> v;
	
	v.push_back(50);
        v.push_back(60);
        v.push_back(30);
        v.push_back(90);
        v.push_back(10);

	sort(v.begin(),v.end(),less<int>());//오름차순
	for(vector<int>::iterator iter=v.begin();iter!=v.end();++iter)
	{
		cout<<*iter<<" ";
	}
	cout<<endl;
	 sort(v.begin(),v.end(),greater<int>());   
    	 for(vector<int>::iterator iter=v.begin();iter!=v.end();++iter)
        {
                cout<<*iter<<" ";
        }

	return 0;
}
