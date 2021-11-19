#include "HomePage.h"


using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

void  main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	TheUniversitySite::HomePage wp;
	Application::Run(% wp);
}
