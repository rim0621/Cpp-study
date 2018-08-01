#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool Pred(int left,int right)
{
	return abs(right-left)<=6;
}

int main()
{
	vector<int>v1;
	v1.push_back(10); //f
	v1.push_back(23); //f
	v1.push_back(35); //t
	v1.push_back(41); //f
	v1.push_back(35); //t->iter
	v1.push_back(36);//t
	v1.push_back(31);//t
	v1.push_back(52);

	vector<int>::iterator iter;
	iter=search_n(v1.begin(),v1.end(),3,30,Pred);
	if(iter!=v1.end())
	{
		cout<<*iter<<endl;
		cout<<*(iter+1)<<endl;		
	}
	return 0;
}

