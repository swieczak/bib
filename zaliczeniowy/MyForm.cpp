#include "MyForm.h"
//test gita
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	zaliczeniowy::MyForm form;
	Application::Run(% form);
}