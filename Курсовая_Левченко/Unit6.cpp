//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit6.h"
#include <math.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm6 *Form6;
//---------------------------------------------------------------------------
__fastcall TForm6::TForm6(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm6::FormCreate(TObject *Sender)
{
for (int i=0; i<=10; i++)
{
//Series1->AddXY((i+0.1*cos(i))*10,15*i*i,"");
//Series2->AddXY(100*i, i*i+15*i,"");
}
}
//---------------------------------------------------------------------------

