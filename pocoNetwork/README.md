# C++ Network Programming using POCO API
#### download
1. wget ~~~
2. ./configure
3. make -s   (it takes long time)
4. sudo mkdir /usr/include/Poco
5. sudo cp -r Foundation/include/Poco/. /usr/include/Poco/
6. sudo cp -r Util/include/Poco/. /usr/include/Poco/
7. sudo cp -r JSON/include/Poco/. /usr/include/Poco/
8. sudo cp -r lib/Linux/x86_64/. /usr/lib/
9. sudo cp -r Net/include/Poco/. /usr/include/Poco/
#### compile
g++ -I /usr/include/Poco -L /usr/lib/ -o test test.cpp -lPocoFoundation -lPocoUtil -lPocoNet -lPocoXML
## POCO 네트워크 프로그래밍 기초
* 네트워크 관련 기능은 Poco::Net 이름 공간에 정의되어 있다.
#### IPAddress Class
```C++
IPAddress ia2("192.x.x.x");
if(ia2.family() == IPAddress::IPv4)//IPv4인지 확인
if(ia2.family() == IPAddress::IPv6)//	6인지 확인

//IP를 문자열로 변환
IPAddress ia2("192.x.x.x");
if(ia2.toString == "192.x.x.x")

//문자열로 된 IP를 사용할 수 있는지 조사
IPAddress ip;
if(IPAddress::tryParse("192.x.x.x",ip)

//IP == LOOPBACK?
IPAddress ip("127.0.0.1");
ip.isLoopback();	//T

//IP주소가 브로드캐스트 주소인지 확인
IPAddress ip2("255.255.255.255");
ip2.isBroadcast(); //T
```
#### SocketAddress Class
```C++
//원격지의 IP주소를 지정할 때 앞의 IPAddress를 단독으로
//하지 않고 IPAddress 객체와 포트번호를 인자로 받는다.
//Poco::Net::SocketAddress 클래스 사용.
explicit SocketAddress(const std::string & hostAndPort);  //IP와 포트를 하나로
SocketAddress(const IPAddress & host, Poco::UInt16 port);
SocketAddress(const std::string & host, Poco::UInt16 port);

DialogSocket ds;
ds.connect(SocketAddress("localhost",9911));
```
#### DNS(도메인 네임 시스템) Class
* Poco::Net::DNS 클래스를 사용하여 DNS로 IP주소를 얻거나 그 반대로도 얻을 수 있다.
* [code](https://github.com/rim0621/Cpp-study/tree/master/pocoNetwork/nameResolution.cpp)
#### Socket
* 소켓 클래스는 BSD소켓의(?) 기능을 클래스로 구현한것.
 - 기능 : select, poll, epoll, socket option 설정하기, socket에 연결된 IP 주소를 얻을 수 있다.
#### StreamSocket 클래스
* TCP로 서버에 접속할 때 사용, 클라이언트용으로 소켓을 사용할 때 사용.
* [HTTP server 접속 code](https://github.com/rim0621/Cpp-study/tree/master/pocoNetwork/HTTPaccess.cpp)

















