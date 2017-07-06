#include<iostream>

using namespace std;

void Print()
{
	cout<<"전역함수!"<<endl;
}

struct Functor
{
	void operator()()
	{
		cout<<"함수 객체!"<<endl;
	}
};
int main()
{
	Functor functor;
	Print();
	functor();
	return 0;
}

