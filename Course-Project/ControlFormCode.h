//---------------------------------------------------------------------------

#ifndef ControlFormCodeH
#define ControlFormCodeH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TControlForm : public TForm
{
__published:	// IDE-managed Components
	void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TControlForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TControlForm *ControlForm;
//---------------------------------------------------------------------------
#endif
