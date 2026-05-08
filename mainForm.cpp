#include "mainForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main(array<String^>^ arg)
{
	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);
	     Practica5::mainForm form;
	Application::Run(% form);
}

