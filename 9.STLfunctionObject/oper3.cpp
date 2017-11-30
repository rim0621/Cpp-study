#include<iostream>
using namespace std;

struct LessFunctor{	//함수객체조건자

	bool operator() (int left, int right) const
	{
		return left < right;
	}
};

bool LessFun(int left, int right)	//함수 조건자
{
	return left < right;
}

int main()
{
	bool (*LessPtr) (int,int) = LessFun;	//함수 포인터 조건자
	LessFunctor lessFunctor;

	cout<< lessFunctor(10,20)<<endl;
	cout<< LessFun(10,20)<<endl;
	cout<<LessPtr(10,20)<<endl;
	return 0;
}
