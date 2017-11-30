#include<iostream>
#include<functional>
using namespace std;

template<typename T>
struct Logical_and: public binary_function<T,T,bool>
{
	bool operator() (const T& left, const T& right) const
	{
		return left && right;
	}
};

int main()
{
	int n=30;
	Logical_and<bool> oAnd;
	cout<<oAnd(greater<int>()(n,10),less<int>()(n,50))<<endl; //10< n <50
	cout<<Logical_and<bool>()(greater<int>()(n,10),less<int>()(n,50))<<endl;
	return 0;
}
