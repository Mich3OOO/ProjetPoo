#include "SignUp.h"
#include "SqlHandler.h"
using namespace System;
using namespace System::Windows::Forms;


[STAThread]
int main()//array < String^>^ args)
{
    data::Client^ cl = gcnew data::Client;
    cl->nomCl = "Juan";
    cl->prenomCl = "Miguel";
    cl->dateNa = "02-11-2002";
    cl->Mail = "MM";
    cl->Mail2 = "MM2";
    cl->societe = "S";

    SqlHandler^ test = gcnew SqlHandler();

        
    test->CreateClient(cl);
    /*Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(0);
    ProjetPoo::SignUp form;
    Application::Run(% form);*/
    return 1;
}