//---------------------------------------------------------------------------

#ifndef AuthFormCodeH
#define AuthFormCodeH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TPasswordModal : public TForm
{
__published:	// IDE-managed Components
	TEdit *PwdEdit;
	TLabel *Label1;
	TButton *SubmitButton;
	TButton *ReturnButton;
	TLabel *Label2;
	TLabel *Dev;
	void __fastcall ReturnButtonClick(TObject *Sender);
	void __fastcall SubmitButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TPasswordModal(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TPasswordModal *PasswordModal;
//---------------------------------------------------------------------------
#endif
