#include<iostream>
#include<vector>
#include<algorithm>
#include<time.h>
#include<functional>
using namespace std;

int main()
{
	clock_t begin,end;
	vector<int> v1;
	vector<int> v2(9999999);
	for(int i=0;i<9999999;++i)
		v1.push_back(rand()%10000000);


	copy(v1.begin(),v1.end(),v2.begin());
	begin=clock();
	sort(v2.begin(),v2.end());
	end=clock();
	cout<<"time sort(): "<<((end-begin)/CLOCKS_PER_SEC)<<endl;

        copy(v1.begin(),v1.end(),v2.begin());
        begin=clock();
        stable_sort(v2.begin(),v2.end());
        end=clock();
        cout<<"time stable_sort(): "<<((end-begin)/CLOCKS_PER_SEC)<<endl;


        copy(v1.begin(),v1.end(),v2.begin());
        begin=clock();
        partial_sort(v2.begin(),v2.begin()+9999999,v2.end());
        end=clock();
        cout<<"time partial_sort(): "<<((end-begin)/CLOCKS_PER_SEC)<<endl;



	return 0;

}
