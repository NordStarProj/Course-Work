//---------------------------------------------------------------------------

#ifndef PreLaunchCodeH
#define PreLaunchCodeH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------
class TPreLaunchForm : public TForm
{
__published:	// IDE-managed Components
	TButton *PreCheckButton;
	TButton *EditModeButton;
	TButton *Exit;
	TButton *ViewModeButton;
	void __fastcall ExitClick(TObject *Sender);
	void __fastcall PreCheckButtonClick(TObject *Sender);
	void __fastcall ViewModeButtonClick(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall EditModeButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TPreLaunchForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TPreLaunchForm *PreLaunchForm;
//---------------------------------------------------------------------------
#endif
