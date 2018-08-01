#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1("He");
	string s2("He");
	string s3("He");
	string s4("He");
	string s5("He");
        string s6("He");
        string s7("He");
        string s8("He");
        string s9("He");
        string s10("He");

	string t("llo!");
	const char* p1 = "llo!";
	const char* p2 = p1+4;

	s1.append(t);
	cout<<s1<<endl;
	
	s2.append(t,0,4);
	cout<<s2<<endl;
	
	s3.append("llo!");
	cout<<s3<<endl;

	s4.append(t.begin(),t.end());
	cout<<s4<<endl;

	s5.append("llo!",4);
	cout<<s5<<endl;

	s6.append(p1,p2);
	cout<<s6<<endl;
	
	s7.append(5,'H');
	cout<<s7<<endl;

	s8 += t;
	cout<<s8<<endl;
	
	return 0;
}	
