#include "SignUp.h"
#include "SqlHandler.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
int main()
{
    
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(0);
    ProjetPoo::SignUp form;
    Application::Run(% form);
    return 1;
}