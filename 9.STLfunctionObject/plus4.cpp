#include<iostream>
#include<functional>
using namespace std;
int main()
{
	plus<int> oPlus;
//객체로  암묵적 호출
	cout<<oPlus(10,20)<<endl;
// 객체로 명시적 호출
	cout<<oPlus.operator() (10,20)<<endl;
// 임시 객체로 암묵적 호출(일반적인 사용)
	cout<<plus<int>() (10,20)<<endl;
// 임시 객체로 명시적 호출
	cout<<plus<int>().operator() (10,20)<<endl;
	return 0;	
}
