#include "Login.h"
using namespace System;
using namespace System::Windows::Forms;

void Main(array<String^>^args){
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ControldeCalidadView::Login form;
	Application::Run(%form);
}

