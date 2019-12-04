#include "MyForm.h"
#include "Registration.h"
#include "Dialog.h"
#include "menu.h"
#include "choose.h"
#include "keyboard.h"
#include "statistic.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void Main(array<String^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Training::MyForm form;
	Application::Run(%form);
}

