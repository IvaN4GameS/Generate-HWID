#include <iostream>
#include <Windows.h>

#define BUFFER 100

void grab()
{
	char loc[255];

	DWORD buff = BUFFER;
	RegGetValueA((HKEY_LOCAL_MACHINE), ("SYSTEM\\CurrentControlSet\\Control\\IDConfigDB\\Hardware Profiles\\0001"), ("HwProfileGuid"), RRF_RT_ANY, NULL, (PVOID)&loc, &buff);
	std::cout << loc << std::endl;
	std::cout <<  "Copy your HWID and paste it\n" << std::endl;
	std::cout <<  ("HWID Generator by IvaN4GameS");

}


int main()
{

	while (true)
	{
		grab();
		Sleep(1);
		std::cout << ("\n") << std::endl;
		system("pause");
		exit(1);
	}

}
