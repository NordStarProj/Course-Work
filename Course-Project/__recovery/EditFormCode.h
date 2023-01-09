//---------------------------------------------------------------------------

#ifndef EditFormCodeH
#define EditFormCodeH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------
class TEditMode : public TForm
{
__published:	// IDE-managed Components
	TDBNavigator *ViewDBNavigator;
	TDBGrid *ViewDBGrid;
	TStatusBar *StatusBar1;
	TLabel *Dev;
	TTimer *ViewToolbarTimer;
	void __fastcall ViewModeOptionENBClick(TObject *Sender);
	void __fastcall ExitOptionClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TEditMode(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TEditMode *EditMode;
//---------------------------------------------------------------------------
#endif
