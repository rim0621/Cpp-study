#include "Poco/Net/DNS.h"
#include "Poco/Net/IPAddress.h"
#include "Poco/Net/NetException.h"
#include "Poco/Logger.h"
#include <string>
#include <iostream>

void ShowHostEntryItems(const Poco::Net::HostEntry& he)
{
	std::cout<<Poco::format("name: %s",he.name())<<std::endl;
	for(Poco::Net::HostEntry::AddressList::const_iterator itr= he.addresses().begin(); itr!=he.addresses().end();++itr)
	{
		std::cout<<Poco::format(" address#%d: %s",static_cast<int>(itr - he.addresses().begin()), itr->toString()) <<std::endl;
	}
	for(Poco::Net::HostEntry::AliasList::const_iterator itr=he.aliases().begin(); itr!=he.aliases().end();++itr)
	{	
		std::cout<<Poco::format("  alias#%d: %s", static_cast<int>(itr - he.aliases().begin()),*itr)<<std::endl;
	}

}

int main(int argc, char* argv[])
{
	std::cout<<"test1"<<std::endl;
	std::cout<<"Poco::Net::DNS::hostName()"<<std::endl;
	std::cout<<Poco::format(" %s", Poco::Net::DNS::hostName())<<std::endl;
	std::cout<<std::endl;

	const std::string hostname(argv[1]);
	Poco::Net::DNS::flushCache();
	
	std::cout<<"test2"<<std::endl;
	std::cout<<Poco::format("Poco::Net::DNS::hostByame(\"%s\")",hostname)<<std::endl;
	ShowHostEntryItems(Poco::Net::DNS::hostByName(hostname));
	std::cout<<std::endl;

	std::cout<<"test2"<<std::endl;
	const std::string hostaddress(Poco::Net::DNS::hostByName(hostname).addresses().begin()->toString()); //호스트네임을 ip주소로
	const Poco::Net::IPAddress ipaddress(hostaddress);
	std::cout<<Poco::format("Poco::Net::DNS::hostByAddress(Poco::Net::IPAddress(\"%s\"))",ipaddress.toString())<<std::endl;
	ShowHostEntryItems(Poco::Net::DNS::hostByAddress(ipaddress));
	std::cout<<std::endl;


	std::cout<<"test3"<<std::endl;
	std::cout<<Poco::format("Poco::Net::DNS::resolve(\"%s\")",hostname)<<std::endl;
	ShowHostEntryItems(Poco::Net::DNS::resolve(hostname));
	std::cout<<std::endl;

	std::cout<<"test4"<<std::endl;
	std::cout<<Poco::format("Poco::Net::DNS::resolve(\"%s\")",hostaddress)<<std::endl;
	ShowHostEntryItems(Poco::Net::DNS::resolve(hostaddress));

	
	
	return 0;
	

}
