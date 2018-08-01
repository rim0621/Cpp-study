#include<string.h>
#include "SerialConnect.h"
SerialConnect::SerialConnect(LPCWSTR COM, int setBaudRate, int setByteSize, char *commandBuffer, int BufSize){
	this->BufSize = BufSize;
	this->SerialBuffer = new char[BufSize];
	this->NoBytesRead = BufSize;
	Connect(COM, setBaudRate, setByteSize, commandBuffer);

}

void SerialConnect::Connect(LPCWSTR COM, int setBaudRate, int setByteSize, char *commandBuffer){
	this->COMport = COM;
	this->hComm = CreateFile(COMport,     //port name
			GENERIC_READ | GENERIC_WRITE, //Read/Write
			0,                            // No Sharing
			NULL,                         // No Security
			OPEN_EXISTING,// Open existing port only
			0,            // Non Overlapped I/O
			NULL);        // Null for Comm Devices

	if (this->hComm == INVALID_HANDLE_VALUE)
		cout << "Error in opening serial port" << endl;
	else{
		cout << "opening serial port successful" << endl;
		sendCommand(setBaudRate, setByteSize, commandBuffer);
	}
}

void SerialConnect::sendCommand(int setBaudRate, int setByteSize, char *commandBuffer){

	this->commandBuffer = commandBuffer; // #or

	this->dNoOFBytestoWrite = sizeof(commandBuffer);

	this->Status = WriteFile(hComm,        
			commandBuffer,     
			dNoOFBytestoWrite,  
			&dNoOfBytesWritten, 
			NULL);

	DCB dcbSerialParams = { 0 };
	dcbSerialParams.DCBlength = sizeof(dcbSerialParams);
	dcbSerialParams.BaudRate = setBaudRate;
	dcbSerialParams.ByteSize = setByteSize;
	dcbSerialParams.StopBits = ONESTOPBIT;
	dcbSerialParams.Parity = NOPARITY;  

	COMMTIMEOUTS timeouts = { 0 };
	timeouts.ReadIntervalTimeout = 10; 
	timeouts.ReadTotalTimeoutConstant = 10; 
	timeouts.ReadTotalTimeoutMultiplier = 10;
	timeouts.WriteTotalTimeoutConstant = 50; 
	timeouts.WriteTotalTimeoutMultiplier = 10;

	if (this->Status)
		cout << "Command Successful" << endl;
	else
		cout << "Sorry, fail to Command" << endl;
}

void SerialConnect::getData(){
	ReadFile(this->hComm,           
			&*SerialBuffer,      
			this->BufSize,    
			&this->NoBytesRead, 
			NULL);
}


