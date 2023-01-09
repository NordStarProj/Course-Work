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
	TStatusBar *StatusBar1;
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
	TTimer *ViewToolbarTimer;
	TDBGrid *ViewDBGrid;
	TLabel *Dev;
	void __fastcall ButtonUPDClick(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall ButtonExitClick(TObject *Sender);
	void __fastcall ExitOptionClick(TObject *Sender);
	void __fastcall ViewModeOptionClick(TObject *Sender);
	void __fastcall EditModeOptionClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TViewMode(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TViewMode *ViewMode;
//---------------------------------------------------------------------------
#endif
