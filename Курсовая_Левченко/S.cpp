//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "S.h"
#include "Unit2.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit6.h"
#include "Unit7.h"
#include "Unit8.h"
#include "Unit9.h"
#include "Unit10.h"
#include "ULit.h"
#include "Unit13.h"
 #include "Unit14.h"
#include "Unit15.h"
#include "Unit16.h"
#include "Unit17.h"
#include "Unit18.h"
#include "Unit19.h"
#include "Unit20.h"
int Im3koor, Im2koor, Im23koor, Im22koor, Im33koor, Im32koor, ImPech2koor, ImPech3koor, ImReak2koor, ImReak3koor, ImTopka2koor, ImTopka3koor;
int m1=0;
int m2=0;
int m3=0;
int a1=0;
int a2=0;
int a3=0;

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Open1Click(TObject *Sender)
{
Panel1->Visible=true;
Image1->Visible=false;
Image2->Visible=true;
Image7->Visible=true;
Image9->Visible=true;
Image11->Visible=true;
Image13->Visible=true;
Image2->Visible=true;
Image17->Visible=true;
Image20->Visible=true;
Image4->Visible=true;
Image11->Visible=true;
Image29->Visible=true;
Image12->Visible=true;
Image28->Visible=true;
Image27->Visible=true;
Image31->Visible=true;
Image26->Visible=true;
Image28->Visible=true;
}
void __fastcall TForm1::Image9MouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
Panel1->Caption="Абсорбер";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image11MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
Panel1->Caption="Декандатор";
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Image13MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
 Panel1->Caption="Колона синтезу";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image17MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
 Panel1->Caption="Декандатор";
}

void __fastcall TForm1::Image20MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
Panel1->Caption="Реактор";
}
//---------------------------------------------------------------------------


void __fastcall TForm1::N20Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N2Click(TObject *Sender)
{
Form1->Caption="Мнемосхема";
Panel1->Visible=true;
Panel1->Top=550;  Panel1->Left=616;
Image1->Visible=false;
Image2->Visible=true;
Image7->Visible=true;
Image9->Visible=true;
Image11->Visible=true;
Image13->Visible=true;
Image2->Visible=true;
Image17->Visible=true;
Image20->Visible=true;
Image4->Visible=true;
Image11->Visible=true;
Image29->Visible=true;
Image12->Visible=true;
Image28->Visible=true;
Image27->Visible=true;
Image31->Visible=true;
Image26->Visible=true;
Image28->Visible=true;
}
void __fastcall TForm1::N12Click(TObject *Sender)
{
 Form13->Visible=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::N15Click(TObject *Sender)
{
 Form6->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N17Click(TObject *Sender)
{
 Form8->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N18Click(TObject *Sender)
{
Form9->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N19Click(TObject *Sender)
{
Form15->Visible=true;
}

void __fastcall TForm1::Image94Click(TObject *Sender)
{
Form10->Visible=true;

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image102Click(TObject *Sender)
{
Form16->Visible=true;

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image73Click(TObject *Sender)
{
Form15->Visible=true;
}

void __fastcall TForm1::Image109Click(TObject *Sender)
{
 Form17->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image110Click(TObject *Sender)
{
 Form18->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image111Click(TObject *Sender)
{
 Form19->Visible=true;
}

void __fastcall TForm1::Image106Click(TObject *Sender)
{
Form20->Visible=true;
}


void __fastcall TForm1::Image12MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
Panel1->Caption="Підігрівач";
}



void __fastcall TForm1::Image26MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
Panel1->Caption="Холодильник";
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Image4MouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
Panel1->Caption="Відгінний апарат";

}
//---------------------------------------------------------------------------




void __fastcall TForm1::Image34MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
Panel1->Caption="Насос";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N10Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N11Click(TObject *Sender)
{
Form33->Visible=true;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::N3Click(TObject *Sender)
{
Form2->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N13Click(TObject *Sender)
{
 Form10->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N4Click(TObject *Sender)
{
Form4->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N14Click(TObject *Sender)
{
 Form5->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N16Click(TObject *Sender)
{
  Form7->Visible=true;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::N24Click(TObject *Sender)
{
 Form18->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N22Click(TObject *Sender)
{
  Form14->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N25Click(TObject *Sender)
{
  Form16->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N23Click(TObject *Sender)
{
 Form17->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N26Click(TObject *Sender)
{
 Form20->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N27Click(TObject *Sender)
{
 Form19->Visible=true;
}
//---------------------------------------------------------------------------





void __fastcall TForm1::Image27MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
Panel1->Caption="Вугільний адсорбер";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image28MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
Panel1->Caption="Піч";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image31MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
Panel1->Caption="Контактний апарат";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image29MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
Panel1->Caption="Підігрівач";        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image2MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
Panel1->Caption="Відгінна колона";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Image3MouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
Panel1->Caption="Колона дисциляції";
}
//---------------------------------------------------------------------------




