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
        v1.push_back(50);

        v2.push_back(11);
        v2.push_back(22);
        v2.push_back(33);
        v2.push_back(44);
        v2.push_back(55);

        for(vector<int>::size_type i =0;i<v1.size();++i)
                cout<<v1[i]<<" , "<<v2[i]<<endl;

	swap_ranges(v1.begin(),v1.end(),v2.begin());

	cout<<"==============================="<<endl;

	for(vector<int>::size_type i =0;i<v1.size();++i)
		cout<<v1[i]<<" , "<<v2[i]<<endl;

	return 0;
}
