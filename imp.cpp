//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "imp.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
void __fastcall TForm1::AddTaskClick(TObject *Sender)
{
	String taskText = EditTask->Text;
	if (taskText.IsEmpty()) {
		EmptyTaskAlert->Text="Enter Valid Value";
	}else {
	  ListTaskBox->Items->Add(taskText);
	}

	EditTask->Text="";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ListTaskBoxItemClick(TCustomListBox * const Sender, TListBoxItem * const Item)

{
	 int index= Item->Index;
	 ListTaskBox->Items->Delete(index);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::EditTaskKeyDown(TObject *Sender, WORD &Key, System::WideChar &KeyChar,
		  TShiftState Shift)
{
	EmptyTaskAlert->Text = "";

}
//---------------------------------------------------------------------------
