#include<iostream>
#include<algorithm>
#include<vector>
#include<iterator>
using namespace std;

int main()
{
  vector<int> v;
	copy(istream_iterator<int>(cin),istream_iterator<int>(),back_inserter<vector<int> >(v));
	//ctrl + D 받을 때 까지
	copy(v.begin(),v.end(), ostream_iterator<int>(cout," "));
	cout<<endl;
	return 0;
}
