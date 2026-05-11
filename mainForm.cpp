#include "mainForm.h"
#include "Matriculacion.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(cli::array<String^>^ argv)
{
	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);
	Practica5::mainForm form;
	Application::Run(%form);
	return 0;
}

