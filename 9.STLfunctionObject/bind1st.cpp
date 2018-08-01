#include<iostream>
#include<functional>
using namespace std;
int main()
{
	binder1st<less<int> > binder=bind1st(less<int>(), 10);
	//less의 첫 인자를 10으로 고정한 단항 조건자 바인더 생성
	cout<< binder(5)<<endl;
	cout<<binder(20)<<endl;
	return 0;
}
