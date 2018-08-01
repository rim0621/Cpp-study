#include<windows.h>
#include<iostream>
#include <stdlib.h>
using namespace std;
class SerialConnect{
	public:
		HANDLE hComm;
		LPCWSTR COMport;
		DWORD dNoOFBytestoWrite;         
		DWORD dNoOfBytesWritten;   
		int BufSize;
		int Status;
		char *SerialBuffer;
		char *commandBuffer;
		DWORD NoBytesRead;



		SerialConnect(LPCWSTR COMport, int setBaudRate, int setByteSize, char *commandBuffer, int BufSize);
		void Connect(LPCWSTR COMport, int setBaudRate, int setByteSize, char *commandBuffer);
		void sendCommand(int setBaudRate, int setByteSize,char *commandBuffer);
		void getData();

};
