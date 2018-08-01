#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(30);
        v1.push_back(60);
        v1.push_back(90);

	vector<int> v2;
        v2.push_back(20);
//	v2.push_back(30); //위에꺼랑 중복될때는 둘다나옴
	v2.push_back(40);
	v2.push_back(50);
//        v2.push_back(20);	//중복되었을때 -> 나옴
//        v2.push_back(100);   //소팅이 안되있을때-> 나옴
        v2.push_back(70);
	
	vector<int>v3(15);
	vector<int>::iterator iter_end;
	iter_end=merge(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());

	cout<<"v3 : ";
	for(vector<int>::size_type i=0; i<v3.size();++i)
		cout<<v3[i]<< " ";
	cout<<endl;
	return 0;

}
