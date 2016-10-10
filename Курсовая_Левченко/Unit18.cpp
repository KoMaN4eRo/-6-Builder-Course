//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <math.h>
#include <ctime>
#include <conio.h>
#include <iostream>
//---------------------------------------------------------------------------
#pragma package(smart_init)

#pragma resource "*.dfm"


#include "Unit18.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "CGAUGES"
#pragma resource "*.dfm"
TForm18 *Form18;
int a=1, b=0;
int m1;
int x1;
int w;
int p;
int k;
//---------------------------------------------------------------------------
__fastcall TForm18::TForm18(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------



void __fastcall TForm18::FormCreate(TObject *Sender)
{
  Chart1->Visible = false;

//Panel4->Caption = TrackBar1->Position;
Panel6->Caption = TrackBar1->Position;
Panel3->Caption = (TrackBar1->Position);
Panel5->Caption = "80";
Panel4->Caption = "80";
Image1->Picture->Bitmap->LoadFromFile("frame_0_delay-0.5s.bmp");
Timer4->Enabled= false;
Timer5->Enabled= false;
Timer6->Enabled= false;
Timer7->Enabled= false;
Timer8->Enabled= false;
Timer9->Enabled= false;
}
//---------------------------------------------------------------------------


int r[51];
void __fastcall TForm18::TrackBar1Change(TObject *Sender)
{

if(TrackBar1->Position>=130)
{
//Image12->Picture->LoadFromFile("33.jpg");
//Image11->Picture->LoadFromFile("серий.jpg");
}

if(TrackBar1->Position<=129)
{
//Image12->Picture->LoadFromFile("серий.jpg");
//Image11->Picture->LoadFromFile("зеленый.jpg");
}





k=0;
p=0;


Panel4->Caption = "80";


//----Вихід----

//------Клапан--------------------

//-----------------------------


}

void time_dlay(int val)
{
	std::time_t t,t1;
	time(&t);
	do
	{
		time(&t1);
	}
	while((t1-t)<val);
}

void __fastcall TForm18::Button3Click(TObject *Sender)
{
Chart1->Visible = true;
Panel3->Visible = true;
Panel4->Visible = true;
Panel5->Visible = true;
Panel6->Visible = true;
Panel4->Caption = 80;
//Panel5->Caption = 0000;
//Panel6->Caption = 0000;
Panel3->Caption = 0000;
Button1->Visible = false;
Button2->Visible = true;
CGauge1->Progress = 100;
CGauge2->Progress = 100;
CGauge3->Progress = 0;
CGauge4->Progress = 0;
CGauge5->Progress = 100;
CGauge6->Progress = 100;
CGauge7->Progress = 100;
CGauge8->Progress = 100;
CGauge9->Progress = 100;
CGauge10->Progress = 0;
CGauge11->Progress = 0;
CGauge12->Progress = 0;

Timer4->Enabled = true;
Timer5->Enabled = true;



}


//---------------------------------------------------------------------------

void __fastcall TForm18::Button4Click(TObject *Sender)
{

Chart1->Visible = false;

 Button2->Visible = false;
 Button1->Visible = true;
}
//---------------------------------------------------------------------------
  int m[51];
void __fastcall TForm18::Timer1Timer(TObject *Sender)
{
 for (int i=1; i<50 ; i++)
                {
        m[i]=m[i+1];

                }

        m[50]=(TrackBar1->Position)+(1-random(3))*2;
        Series1->Clear();


        for (int i=1 ; i<50 ; i++)
                {
                 Series1->AddY( m[i],"",clRed);
                }
}
//---------------------------------------------------------------------------

void __fastcall TForm18::Timer2Timer(TObject *Sender)
{

Panel3->Caption = (TrackBar1->Position)+(1-random(3))*2;
Panel4->Caption = (TrackBar1->Position);
Panel6->Caption = (TrackBar1->Position)+(1-random(3))*2;        
}
//---------------------------------------------------------------------------

void __fastcall TForm18::Timer3Timer(TObject *Sender)
{

if(TrackBar1->Position>=121)
if(TrackBar1->Position<=129)
{
Panel5->Caption = 20+(1-random(3))*2;
}


if(TrackBar1->Position==130)
{
Panel5->Caption = 10+(1-random(3))*2;
}


if(TrackBar1->Position>=23)
if(TrackBar1->Position<=35)
{
Panel5->Caption = 90+(1-random(3))*2;
}


if(TrackBar1->Position>=36)
if(TrackBar1->Position<=48)
{
Panel5->Caption = 80+(1-random(3))*2;
}


if(TrackBar1->Position>=49)
if(TrackBar1->Position<=61)
{
Panel5->Caption = 70+(1-random(3))*2;
}


if(TrackBar1->Position>=62)
if(TrackBar1->Position<=76)
{
Panel5->Caption = 60+(1-random(3))*2;
}


if(TrackBar1->Position>=77)
if(TrackBar1->Position<=89)
{
Panel5->Caption = 50+(1-random(3))*2;
}


if(TrackBar1->Position>=90)
if(TrackBar1->Position<=112)
{
Panel5->Caption = 40+(1-random(3))*2;
}


if(TrackBar1->Position>=113)
if(TrackBar1->Position<=121)
{
Panel5->Caption = 30+(1-random(3))*2;
}


if(TrackBar1->Position>=10)
if(TrackBar1->Position<=21)
{
Panel5->Caption = 100+(1-random(3))*2;
}        
}
//---------------------------------------------------------------------------





void __fastcall TForm18::Timer4Timer(TObject *Sender)
{
  this->CGauge1->Progress = this->CGauge1->Progress-20;
  if(CGauge1->Progress==0)
     {

       Timer4->Enabled=false;
       Timer6->Enabled = true;
     }


}
//---------------------------------------------------------------------------

void __fastcall TForm18::Timer5Timer(TObject *Sender)
{
       this->CGauge4->Progress = this->CGauge4->Progress+10;
  if(CGauge4->Progress==100)
     {

       Timer5->Enabled=false;
   Timer7->Enabled=true;
     }
}
//---------------------------------------------------------------------------

void __fastcall TForm18::Timer6Timer(TObject *Sender)
{
     this->CGauge2->Progress = this->CGauge2->Progress-20;
  if(CGauge2->Progress==0)
     {

       Timer6->Enabled=false;
       Timer7->Enabled=true;
       //Timer10->Enabled=true;
     }
}
//---------------------------------------------------------------------------

void __fastcall TForm18::Timer7Timer(TObject *Sender)
{
       this->CGauge10->Progress = this->CGauge10->Progress+20;
       this->CGauge11->Progress = this->CGauge11->Progress+20;
       this->CGauge12->Progress = this->CGauge12->Progress+20;
       this->CGauge9->Progress = this->CGauge9->Progress-20;
       this->CGauge8->Progress = this->CGauge8->Progress-20;
       this->CGauge7->Progress = this->CGauge7->Progress-20;
       this->CGauge6->Progress = this->CGauge6->Progress-20;
  if(CGauge9->Progress==0)
     {
         Timer7->Enabled=false;
         Timer9->Enabled=true;
     }
}
//---------------------------------------------------------------------------


void __fastcall TForm18::Timer9Timer(TObject *Sender)
{
   this->CGauge13->Progress = this->CGauge13->Progress+10;
   this->CGauge5->Progress = this->CGauge5->Progress-10;
  if(CGauge13->Progress==100)
     {

       Timer5->Enabled=false;
       //Timer10->Enabled=true;
     }
}
//---------------------------------------------------------------------------

