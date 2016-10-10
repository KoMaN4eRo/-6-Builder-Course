//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit9.h"
#include <math.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm9 *Form9;
//---------------------------------------------------------------------------
__fastcall TForm9::TForm9(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm9::FormCreate(TObject *Sender)
{
for (int i=0; i<=100; i++)
{
//Series1->AddXY(1.1*i,(sqrt(i))*(i+0.01) ,"");
//Series2->AddXY(2*i,(sqrt(i))+(i+2) ,"");
}
}
//---------------------------------------------------------------------------
