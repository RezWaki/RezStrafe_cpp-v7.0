#include "main.h"
#include <Windows.h>
#include <iostream>
using namespace System;
using namespace System::Windows::Forms;

int main(){
	system("color b");
	Console::CursorVisible = false;
	std::cout << "RezStrafe_cpp v7.0 CONSOLE version! Started successfully...\nVisit https://github.com/RezWaki?tab=repositories for fun stuff!\n==========================\n";
	Console::Write("Resolution: "+System::IO::File::ReadAllText("width.ini")+"x"+System::IO::File::ReadAllText("height.ini")+"\nPluser: "+System::IO::File::ReadAllText("strafeangle.ini"));
	Application::EnableVisualStyles();
	Application::Run(gcnew RezStrafecpp::main());
	return 0;
}

