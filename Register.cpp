#include "Register.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]//leave this as is
void stuff(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Deliverable10::Register form;
	Application::Run(%form);
}
