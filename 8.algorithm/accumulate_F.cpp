#include<iostream>
#include<vector>
#include<numeric>

using namespace std;

template<typename T>
struct Plus
{
	T operator() (const T& left , const T& right)
	{
		return left+right;
	}
};

int main()
{
        vector<int> v;
        v.push_back(10);
        v.push_back(20);
        v.push_back(30);

	cout<<accumulate(v.begin(),v.end(),0,Plus<int>())<<endl;
	cout<<accumulate(v.begin(),v.end(),0,plus<int>())<<endl;
	cout<<accumulate(v.begin(),v.end(),1,multiplies<int>())<<endl;

        return 0;
}

