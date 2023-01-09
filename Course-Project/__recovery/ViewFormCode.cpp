//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ViewFormCode.h"
#include "AuthFormCode.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TViewMode *ViewMode;
//---------------------------------------------------------------------------
__fastcall TViewMode::TViewMode(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TViewMode::ButtonUPDClick(TObject *Sender)
{
ViewADOTable->Active = false;
ViewADOQuery->Active = false;
ViewADOQuery->SQL->Clear();
AnsiString s = "select  ";
for(int i=0; i<ViewCheckListBox->Items->Count; i++)
	if (ViewCheckListBox->Checked[i])
		s +=ViewCheckListBox->Items->Strings[i] + ",";
s.Delete(s.Length(),1); 				// удаляем последнюю запятую
ViewADOQuery->SQL->Add( s );
ViewADOQuery->SQL->Add( "from Main_Data" );
ViewADOQuery->Open();				// или ...Active = true;
ViewDataSource->DataSet = ViewADOQuery;
ViewDBGrid->Columns->RebuildColumns();	//перестроить отображенние

}
//---------------------------------------------------------------------------
void __fastcall TViewMode::FormCreate(TObject *Sender)
{
	int count = ViewDataSource->DataSet->FieldCount;
	for(int i=0; i<count; i++){
		ViewCheckListBox->Items->Add(ViewDataSource->DataSet->FieldList->Strings[i]);
		ViewCheckListBox->Checked[i] = true;
	}

}
//---------------------------------------------------------------------------
void __fastcall TViewMode::ButtonExitClick(TObject *Sender)
{
Application->Terminate();
}
//---------------------------------------------------------------------------
void __fastcall TViewMode::ExitOptionClick(TObject *Sender)
{
Application->Terminate();
}
//---------------------------------------------------------------------------
void __fastcall TViewMode::ViewModeOptionClick(TObject *Sender)
{
this->Hide();
TViewMode *f = new TViewMode(Application);
f->ShowModal();
Application->Terminate();
}
//---------------------------------------------------------------------------
void __fastcall TViewMode::EditModeOptionClick(TObject *Sender)
{
this->Hide();
TPasswordModal *f = new TPasswordModal(Application);
f->ShowModal();
Application->Terminate();
}
//---------------------------------------------------------------------------
