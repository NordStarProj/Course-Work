//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "EditFormCode.h"
#include "ViewFormCode.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TEditMode *EditMode;
//---------------------------------------------------------------------------
__fastcall TEditMode::TEditMode(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TEditMode::ViewModeOptionENBClick(TObject *Sender)
{
this->Hide();
TViewMode *f = new TViewMode(Application);
f->ShowModal();
Application->Terminate();
}
//---------------------------------------------------------------------------
void __fastcall TEditMode::ExitOptionClick(TObject *Sender)
{
Application->Terminate();
}
//---------------------------------------------------------------------------
