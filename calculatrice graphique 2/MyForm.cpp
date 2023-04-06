#include "MyForm.h"
#include <cmath>
#include <winsock2.h>
#include <msclr/marshal.h>
#pragma comment(lib, "ws2_32.lib")
//#include <arpa/inet.h>
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	calculatricegraphique2::MyForm form;
	Application::Run(% form);
}
