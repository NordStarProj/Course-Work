//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("PreLaunchCode.cpp", PreLaunchForm);
USEFORM("EditFormCode.cpp", EditMode);
USEFORM("AuthFormCode.cpp", PasswordModal);
USEFORM("ViewFormCode.cpp", ViewMode);
USEFORM("ControlFormCode.cpp", ControlForm);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TControlForm), &ControlForm);
		Application->CreateForm(__classid(TPreLaunchForm), &PreLaunchForm);
		Application->CreateForm(__classid(TEditMode), &EditMode);
		Application->CreateForm(__classid(TPasswordModal), &PasswordModal);
		Application->CreateForm(__classid(TViewMode), &ViewMode);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
