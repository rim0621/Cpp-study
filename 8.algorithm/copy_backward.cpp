#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<int> v1;
        v1.push_back(10);
        v1.push_back(20);
        v1.push_back(30);
        v1.push_back(40);

	vector<int> v2(10); //  many
	vector<int> v3(3);  // less
	vector<int>::iterator iter;
	iter=copy_backward(v1.begin(),v1.end(),v2.end());// back->end
//	iter=copy_backward(v2.begin(),v2.end(),v3.end()); //less->error
	cout<<"v2 first : "<<*iter<<endl; //back->first
	cout<<"v1: ";
	for(vector<int>::size_type i=0; i<v1.size();++i)
		cout<< v1[i]<<" ";
	cout<<endl;
        cout<<"v2: ";
        for(vector<int>::size_type i=0; i<v2.size();++i)
                cout<< v2[i]<<" ";
	cout<<endl;

//        cout<<"v3: ";
//        for(vector<int>::size_type i=0; i<v1.size();++i)
//                cout<< v3[i]<<" ";
	cout<<endl;
	return 0;

	

}
