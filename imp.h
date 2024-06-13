//---------------------------------------------------------------------------

#ifndef impH
#define impH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.Layouts.hpp>
#include <FMX.ListBox.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TButton *AddTask;
	TEdit *EditTask;
	TListBox *ListTaskBox;
	TLabel *EditTaskLabel;
	TLabel *EmptyTaskAlert;

	void __fastcall AddTaskClick(TObject *Sender);
	void __fastcall ListTaskBoxItemClick(TCustomListBox * const Sender, TListBoxItem * const Item);
	void __fastcall EditTaskKeyDown(TObject *Sender, WORD &Key, System::WideChar &KeyChar,
          TShiftState Shift);

private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
