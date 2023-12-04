#include "Signin.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array < String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(0);
    ProjetPoo::Signin form;
    Application::Run(% form);
}