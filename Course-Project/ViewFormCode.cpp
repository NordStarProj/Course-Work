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
s.Delete(s.Length(),1); 				// ������� ��������� �������
ViewADOQuery->SQL->Add( s );
ViewADOQuery->SQL->Add( "from Main_Data" );
ViewADOQuery->Open();				// ��� ...Active = true;
ViewDataSource->DataSet = ViewADOQuery;
ViewDBGrid->Columns->RebuildColumns();	//����������� ������������

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
void __fastcall TViewMode::FindButtonClick(TObject *Sender)
{
	if (FindEdit->Text != "") {
	  ViewADOTable->Active = false;
	  ViewADOQuery->Active = false;
	  ViewADOQuery->SQL->Clear();

      AnsiString s =
		"SELECT * FROM Main_Data WHERE Team = '" + FindEdit->Text + "'";

	  ViewADOQuery->SQL->Add(s);
	  ViewADOQuery->Open();
	  ViewDataSource->DataSet = ViewADOQuery;
	  ViewDBGrid->Columns->RebuildColumns();

	}
	else {
		MessageDlg("Enter a Team Name.", mtError, TMsgDlgButtons() << mbOK, 0);
	}

}
//---------------------------------------------------------------------------

void __fastcall TViewMode::Button_SortClick(TObject *Sender)
{
	ViewADOTable->Active = false;
	ViewADOQuery->Active = false;
	ViewADOQuery->SQL->Clear();

	AnsiString s = "select * from Main_Data order by " + Column + " " + Order;

	ViewADOQuery->SQL->Add(s);
	ViewADOQuery->Open();
	ViewDataSource->DataSet = ViewADOQuery;
	ViewDBGrid->Columns->RebuildColumns();
}
//---------------------------------------------------------------------------

void __fastcall TViewMode::RadioButton_downClick(TObject *Sender)
{
	Order = "desc";
}
//---------------------------------------------------------------------------

void __fastcall TViewMode::RadioButton_upClick(TObject *Sender)
{
  Order = "asc";
}
//---------------------------------------------------------------------------


void __fastcall TViewMode::ComboBox_sortSelect(TObject *Sender)
{
  switch(ComboBox_sort->ItemIndex)
  {
    case 0:
    {
	  Column = "�";
      break;
	}
    case 1:
    {
	  Column = "team";
      break;
	}
    case 2:
    {
	  Column = "Trainer";
      break;
	}
    case 3:
    {
	  Column = "CreatedAt";
      break;
	}
    case 4:
    {
	  Column = "Tournament";
      break;
	}
    case 5: {
	  Column = "Location";
	  break;
	}
    }
}
//---------------------------------------------------------------------------


