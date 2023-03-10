//---------------------------------------------------------------------------

#ifndef ViewFormCodeH
#define ViewFormCodeH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.CheckLst.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TViewMode : public TForm
{
__published:	// IDE-managed Components
	TDBNavigator *DBNavigator1;
	TGroupBox *GroupBox1;
	TCheckListBox *ViewCheckListBox;
	TButton *ButtonUPD;
	TDataSource *ViewDataSource;
	TADOTable *ViewADOTable;
	TAutoIncField *ViewADOTableAutoIncField;
	TWideStringField *ViewADOTableTeam;
	TWideStringField *ViewADOTableTrainer;
	TDateTimeField *ViewADOTableCreatedAt;
	TWideStringField *ViewADOTableTournament;
	TWideStringField *ViewADOTableLocation;
	TADOQuery *ViewADOQuery;
	TMainMenu *ViewModeMenu;
	TMenuItem *File1;
	TMenuItem *ExitOption;
	TMenuItem *Mode1;
	TMenuItem *EditModeOption;
	TMenuItem *ViewModeOption;
	TDBGrid *ViewDBGrid;
	TGroupBox *GroupBox_find_sort;
	TEdit *FindEdit;
	TButton *FindButton;
	TComboBox *ComboBox_sort;
	TRadioButton *RadioButton_up;
	TRadioButton *RadioButton_down;
	TButton *Button_Sort;
	void __fastcall ButtonUPDClick(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall ExitOptionClick(TObject *Sender);
	void __fastcall EditModeOptionClick(TObject *Sender);
	void __fastcall FindButtonClick(TObject *Sender);
	void __fastcall Button_SortClick(TObject *Sender);
	void __fastcall RadioButton_upClick(TObject *Sender);
	void __fastcall RadioButton_downClick(TObject *Sender);
	void __fastcall ComboBox_sortSelect(TObject *Sender);
private:	// User declarations
	String Column = "?";
	String Order = "asc";
public:		// User declarations
	__fastcall TViewMode(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TViewMode *ViewMode;
//---------------------------------------------------------------------------
#endif
