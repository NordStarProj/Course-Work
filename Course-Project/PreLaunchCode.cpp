//---------------------------------------------------------------------------

#include <vcl.h>
#include  <fstream>
#pragma hdrstop

#include "PreLaunchCode.h"
#include "ViewFormCode.h"
#include "AuthFormCode.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TPreLaunchForm *PreLaunchForm;
//---------------------------------------------------------------------------
__fastcall TPreLaunchForm::TPreLaunchForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TPreLaunchForm::ExitClick(TObject *Sender)
{
Application->Terminate();
}
//---------------------------------------------------------------------------
void __fastcall TPreLaunchForm::PreCheckButtonClick(TObject *Sender)
{
fstream f("F://WS//WSproj//Course-Work//Course-Project//CW_DB_2003.mdb", ios::binary | ios::in);
 if (f == 0) {
	ShowMessage("BD file not found! Check Directory!");
 } else {
	ShowMessage("BD file found and ready. Buttons Unlocked.");
	EditModeButton->Enabled = true;
	ViewModeButton->Enabled = true;
}
}
//---------------------------------------------------------------------------
void __fastcall TPreLaunchForm::ViewModeButtonClick(TObject *Sender)
{
this->Hide();
TViewMode *f = new TViewMode(Application);
f->ShowModal();
Application->Terminate();
}
//---------------------------------------------------------------------------
void __fastcall TPreLaunchForm::FormCreate(TObject *Sender)
{
ShowMessage("Buttons locked by default.\n\nPlease, consider running a DB check before launching main program.");
}
//---------------------------------------------------------------------------
void __fastcall TPreLaunchForm::EditModeButtonClick(TObject *Sender)
{
this->Hide();
TPasswordModal *f = new TPasswordModal(Application);
f->ShowModal();
Application->Terminate();
}
//---------------------------------------------------------------------------
