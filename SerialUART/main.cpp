#include"SerialConnect.h"

int main()
{

	SerialConnect s(L"//./COM3", CBR_460800, 8, "#or",24);

	s.getData();
	s.getData();
	cout << s.SerialBuffer << endl;	//24 바이트 길이의 데이터를 가지고 온다 .. 이젠 
	// 이것을 알맞게 변환하면 됨.. 근데 조사식으로 봤을때는
	// 24바이트가 다보이지 않는다............
	return 0;

}

