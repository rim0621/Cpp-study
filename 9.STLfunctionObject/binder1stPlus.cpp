#include<iostream>
#include<functional>
#include<algorithm>
#include<vector>
using namespace std;

template<typename T>
struct Plus: public binary_function<T,T,T>{
/*	이것도 가능하지만 보통 상속받아서 사용한다.
	typedef T first_argument_type;
	typedef T second_argument_type;
	typedef T result_type;
*/
	T operator() (const T& left,const T& right) const
	{
		return left + right;
	}
};

int main()
{
	vector<int>v1;
	vector<int>v3(3);
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	vector<int>v4(3);
	
	transform(v1.begin(),v1.end(),v4.begin(),binder1st< Plus<int> > (Plus<int>(),100));
//사용자가 만든 plus는 에러.. binder1st가 이항 함수를 단항 함수로 변환하기 위해
//first_argument_type, scond_argument_type,result_type 형식 정의가 필요하기 때문에
	transform(v1.begin(),v1.end(),v3.begin(),binder1st< plus<int> > (plus<int>(),100));

	cout<<v3[0]<<" ";
	cout<<v3[1]<<" ";
	cout<<v3[2]<<endl;
	cout<<v4[0]<<" ";
	cout<<v4[1]<<" ";
	cout<<v4[2]<<endl;
	return 0;
}
