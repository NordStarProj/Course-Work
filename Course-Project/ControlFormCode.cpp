//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ControlFormCode.h"
#include "PreLaunchCode.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TControlForm *ControlForm;
//---------------------------------------------------------------------------
__fastcall TControlForm::TControlForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TControlForm::FormCreate(TObject *Sender)
{
this->Hide();
TPreLaunchForm *f = new TPreLaunchForm(Application);
f->ShowModal();
Application->Terminate();
}
//---------------------------------------------------------------------------
