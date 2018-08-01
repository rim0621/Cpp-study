#include<iostream>
#include<vector>
#include<algorithm>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
	vector<int> v;
	v.push_back(10);
        v.push_back(20);
        v.push_back(30);
        v.push_back(40);
        v.push_back(50);

	srand((unsigned)time(NULL));// 랜덤 초깃값

	random_shuffle(v.begin(),v.end());
	for(vector<int>::size_type i=0; i<v.size();++i)
		cout<<v[i]<<" ";
	cout<<endl;

        random_shuffle(v.begin(),v.end());
        for(vector<int>::size_type i=0; i<v.size();++i)
                cout<<v[i]<<" ";
        cout<<endl;
	return 0;
}
