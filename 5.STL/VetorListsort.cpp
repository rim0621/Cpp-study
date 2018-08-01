#include<iostream>
#include<vector>
#include<list>
#include<algorithm>

using namespace std;

int main()
{	
	vector<int> v;
        v.push_back(10);
        v.push_back(50);
        v.push_back(30);
        v.push_back(70);
        v.push_back(60);

	list<int> lt;
        lt.push_back(10);
        lt.push_back(20);
        lt.push_back(30);
        lt.push_back(40);
        lt.push_back(50);

	sort(v.begin(),v.end());
//	list(lt.begin(),lt.end());//양방향반복자라 안됨
	for (int i=0;i<5;i++)
	{
		cout<<v[i]<<endl;
	}
	return 0;
}
