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


#include "Demo.h"
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
float prozent;
  AnsiString mystring1;
  AnsiString mystring2;
  int first;
  int second;

  float k1,x11,ch;
int x,c,c2,c3,c4,i,min=60,max=250,i2,j,l,max2=100,min2=0;
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
Timer1->Enabled= false;
Timer2->Enabled= false;
Timer3->Enabled= false;   
Panel5->Caption = "";
Panel4->Caption = "";

Panel3->Caption = "";
Panel4->Caption = "";
Panel6->Caption = "";

Timer4->Enabled= false;
Timer5->Enabled= false;
Timer6->Enabled= false;
Timer7->Enabled= false;
Timer8->Enabled= false;
Timer9->Enabled= false;
Timer10->Enabled= false;
Timer11->Enabled= false;
Timer12->Enabled= false;
Timer13->Enabled= false;
Timer14->Enabled= false;
Timer15->Enabled= false;
Timer16->Enabled = false;
Timer17->Enabled = false;
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
Image2->Visible = false;
Image3->Visible = false;
Image4->Visible = false;
Chart1->Visible = true;
Panel3->Visible = true;
CGauge1->Progress = 100;
CGauge2->Progress = 0;
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
CGauge13->Progress = 0;
CGauge14->Progress = 0;
CGauge15->Progress = 0;
CGauge16->Progress = 100;
Timer1->Enabled = true;
Timer22->Enabled = true;
Timer4->Enabled = true;
Timer9->Enabled = true;
Timer10->Enabled = true;
Timer16->Enabled = true;
Timer12->Enabled = true;
Timer17->Enabled = true;
Timer10->Interval = 20;
Timer4->Interval = 20;
Timer5->Interval = 20;
Timer6->Interval = 20;
Timer7->Interval = 20;
Timer8->Interval = 20;
Timer9->Interval = 20;
Timer11->Interval = 20;
Timer12->Interval = 20;
Timer13->Interval = 20;
Timer14->Interval = 20;
Timer15->Interval = 20;
Timer16->Interval = 20;
Timer17->Interval = 20;

Timer18->Enabled = false;
Timer19->Enabled = false;
Timer20->Enabled = false;
}


//---------------------------------------------------------------------------

void __fastcall TForm18::Button4Click(TObject *Sender)
{


Chart1->Visible = true;
Timer1->Enabled= false;
Timer2->Enabled= false;
Timer3->Enabled= false;
Panel3->Caption = "";
Panel4->Caption = "";
Panel6->Caption = "";
Panel5->Caption = "";
Timer4->Enabled= false;
Timer5->Enabled= false;
Timer6->Enabled= false;
Timer7->Enabled= false;
Timer8->Enabled= false;
Timer9->Enabled= false;
Timer10->Enabled= false;
Timer11->Enabled= false;
Timer12->Enabled= false;
Timer13->Enabled= false;
Timer14->Enabled= false;
Timer15->Enabled= false;
Timer16->Enabled = false;
Timer17->Enabled = false;
Timer18->Enabled = false;
Timer19->Enabled = false;
Timer20->Enabled = false;
Timer21->Enabled = false;
Timer11->Enabled = false;
}
//---------------------------------------------------------------------------
  int m[51];
void __fastcall TForm18::Timer1Timer(TObject *Sender)
{
 for (int i=1; i<50 ; i++)
                {
        m[i]=m[i+1];

                }

        m[50]=(StrToInt(Edit2->Text))+(1-random(3))*2;
        Series1->Clear();


        for (int i=1 ; i<50 ; i++)
                {
                 Series1->AddY( m[i],"",clRed);
                }
}
//---------------------------------------------------------------------------

void __fastcall TForm18::Timer2Timer(TObject *Sender)
{
    k1=(max-min)*0.01/1.9;
   x11=min+(TrackBar1->Position-60)*k1;
   x=min+(TrackBar1->Position-60)*k1;
   Edit2->Text = x;
   c=(x-x%100)/100;                        //перша цифра числа
   c2=((x-x%10)-(x-x%100))/10;  //друга цифра
   c3=x%10;                                      //третя цифра
   ch=ceil((x11-x)*10);
   c4=ch;                       //цифра після коми
  if (TrackBar1->Position<=99)
 {
  Image9->Picture->LoadFromFile("ITM_Yellow/0 копия.bmp") ;
  Image10->Picture->LoadFromFile("ITM_Yellow/"+IntToStr(c2)+" копия.bmp") ;
  Image11->Picture->LoadFromFile("ITM_Yellow/"+IntToStr(c3)+"d копия.bmp") ;
  Image12->Picture->LoadFromFile("ITM_Yellow/"+IntToStr(c4)+" копия.bmp") ;
  }
    if (100<=TrackBar1->Position<250)
 {
  Image9->Picture->LoadFromFile("ITM_Yellow/"+IntToStr(c)+" копия.bmp") ;
  Image10->Picture->LoadFromFile("ITM_Yellow/"+IntToStr(c2)+" копия.bmp") ;
  Image11->Picture->LoadFromFile("ITM_Yellow/"+IntToStr(c3)+"d копия.bmp") ;
  Image12->Picture->LoadFromFile("ITM_Yellow/"+IntToStr(c4)+" копия.bmp") ;
}
}
//---------------------------------------------------------------------------






void __fastcall TForm18::Timer4Timer(TObject *Sender)
{

  this->CGauge13->Progress = this->CGauge13->Progress+1;
  if(CGauge13->Progress==100)
     {

       Timer4->Enabled=false;
       Timer5->Enabled = true;
     }


}
//---------------------------------------------------------------------------

void __fastcall TForm18::Timer5Timer(TObject *Sender)
{
       this->CGauge2->Progress = this->CGauge2->Progress+1;
  if(CGauge2->Progress==100)
     {

       Timer5->Enabled=false;
   Timer6->Enabled=true;
     }
}
//---------------------------------------------------------------------------

void __fastcall TForm18::Timer6Timer(TObject *Sender)
{
   this->CGauge16->Progress = this->CGauge16->Progress-1;
   this->CGauge4->Progress = this->CGauge4->Progress+1;
   this->CGauge15->Progress = this->CGauge15->Progress+1;
     this->CGauge11->Progress = this->CGauge11->Progress+1;
  if(CGauge11->Progress==100)
     {

       Timer6->Enabled=false;
       Timer18->Enabled=true;
     
       //Timer10->Enabled=true;
     }
}
//---------------------------------------------------------------------------

void __fastcall TForm18::Timer7Timer(TObject *Sender)
{


       this->CGauge10->Progress = this->CGauge10->Progress+1;
  if(CGauge10->Progress==100)
     {
         Timer7->Enabled=false;
     }
}
//---------------------------------------------------------------------------


void __fastcall TForm18::Timer9Timer(TObject *Sender)
{

if(Shape6->Left>290){
Shape6->Left = 152;
Shape1->Left = 296;
 }
Shape6->Left = Shape6->Left + 1;
Shape1->Left = Shape1->Left - 1;
}
//---------------------------------------------------------------------------

void __fastcall TForm18::Timer10Timer(TObject *Sender)
{
 if(Shape2->Left>270){
        Shape2->Left=228;
 }
Shape2->Left = Shape2->Left +1;
}
//---------------------------------------------------------------------------

void __fastcall TForm18::Timer11Timer(TObject *Sender)
{

if(Shape1->Top>56  ){
Timer11->Enabled = false;
Shape1->Top = 24;
Shape1->Left= 352;
Timer10->Enabled = true;
 }
Shape1->Top = Shape1->Top + 1;
}
//---------------------------------------------------------------------------

void __fastcall TForm18::Timer12Timer(TObject *Sender)
{
  if(Shape3->Left>560  ){
Shape3->Left = 432;
 }
Shape3->Left = Shape3->Left + 1;
}
//---------------------------------------------------------------------------

void __fastcall TForm18::Timer13Timer(TObject *Sender)
{

  if(Shape4->Top<276  ){
Timer13->Enabled = false;
Timer15->Enabled=true;
 }
Shape4->Top = Shape4->Top - 1;
}
//---------------------------------------------------------------------------

void __fastcall TForm18::Timer14Timer(TObject *Sender)
{
if(Shape3->Left>752){
Timer14->Enabled = false;

Shape3->Top = 176;
Shape3->Left= 584;
Timer13->Enabled = true;

 }
Shape3->Left = Shape3->Left + 1;

}
//---------------------------------------------------------------------------

void __fastcall TForm18::Timer15Timer(TObject *Sender)
{
    if(Shape4->Left>552  )
     {
        Shape4->Left =  440;
        Shape4->Top =  500;
        Timer17->Enabled = true;
        Timer15->Enabled = false;
     }
        Shape4->Left = Shape4->Left + 1;
}
//---------------------------------------------------------------------------


void __fastcall TForm18::Timer16Timer(TObject *Sender)
{
if(Shape5->Top>416){
Shape5->Top = 288;
 }
Shape5->Top = Shape5->Top + 1;
}
//---------------------------------------------------------------------------

void __fastcall TForm18::Timer17Timer(TObject *Sender)
{
  if(Shape4->Left>472){
Timer17->Enabled = false;
Timer13->Enabled = true;
 }
Shape4->Left = Shape4->Left +1;
}
//---------------------------------------------------------------------------


void __fastcall TForm18::Timer8Timer(TObject *Sender)
{

  if(Shape2->Top<272){
Timer8->Enabled = false;
Shape2->Left = 240;
Shape2->Top = 328;
Timer10->Enabled = true;
 }
Shape2->Top = Shape2->Top - 1;
}

//---------------------------------------------------------------------------


void __fastcall TForm18::Timer18Timer(TObject *Sender)
{
        Image2->Visible = true;
        Timer19->Enabled = true;
        Timer18->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm18::Timer19Timer(TObject *Sender)
{
        Image3->Visible = true;
        Timer20->Enabled = true;
        Timer19->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm18::Timer20Timer(TObject *Sender)
{
        Image4->Visible = true;
        Timer21->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm18::Timer21Timer(TObject *Sender)
{
        if(CGauge14->Progress == 100)
        {
                Timer7->Enabled = true;
        }

        CGauge14->Progress +=1;
}
//---------------------------------------------------------------------------





void __fastcall TForm18::Timer3Timer(TObject *Sender)
{
         CGauge17->Progress += 5;
         if(CGauge17->Progress == 100)
         {
//------------------------------------------------------------------------------
 Panel4->Caption = (TrackBar1->Position);
if(TrackBar1->Position > StrToInt(Edit1->Text)+1)
{
        Edit1->Text = (StrToInt(Edit1->Text)+1);
        Panel5->Caption = Edit1->Text;
//-----------------------------------------------------------------------------
   c=(StrToInt(Edit1->Text)+1-(StrToInt(Edit1->Text)+1)%100)/100;                        //перша цифра числа
   c2=((StrToInt(Edit1->Text)+1-(StrToInt(Edit1->Text)+1)%10)-(StrToInt(Edit1->Text)+1-(StrToInt(Edit1->Text)+1)%100))/10;  //друга цифра
   c3=(StrToInt(Edit1->Text)+1)%10;                                      //третя цифра
   ch=0;
   c4=ch;                       //цифра після коми
  if (TrackBar1->Position<=99)
 {
  Image1->Picture->LoadFromFile("ITM_Green/0.bmp") ;
  Image6->Picture->LoadFromFile("ITM_Green/"+IntToStr(c2)+".bmp") ;
  Image7->Picture->LoadFromFile("ITM_Green/"+IntToStr(c3)+"d.bmp") ;
  Image8->Picture->LoadFromFile("ITM_Green/"+IntToStr(c4)+".bmp") ;
  }
    if (100<=TrackBar1->Position<250)
 {
  Image1->Picture->LoadFromFile("ITM_Green/"+IntToStr(c)+".bmp") ;
  Image6->Picture->LoadFromFile("ITM_Green/"+IntToStr(c2)+".bmp") ;
  Image7->Picture->LoadFromFile("ITM_Green/"+IntToStr(c3)+"d.bmp") ;
  Image8->Picture->LoadFromFile("ITM_Green/"+IntToStr(c4)+".bmp") ;
 }
//-----------------------------------------------------------------------------

}
if(TrackBar1->Position < StrToInt(Edit1->Text)-1)
{
        Edit1->Text = (StrToInt(Edit1->Text)-1);
        Panel5->Caption = Edit1->Text;
        //-----------------------------------------------------------------------------
   c=(StrToInt(Edit1->Text)-1-(StrToInt(Edit1->Text)-1)%100)/100;                        //перша цифра числа
   c2=((StrToInt(Edit1->Text)-1-(StrToInt(Edit1->Text)-1)%10)-(StrToInt(Edit1->Text)-1-(StrToInt(Edit1->Text)-1)%100))/10;  //друга цифра
   c3=(StrToInt(Edit1->Text)-1)%10;                                      //третя цифра
   ch=0;
   c4=ch;                       //цифра після коми
  if (StrToInt(Edit1->Text)<=99)
 {
  Image1->Picture->LoadFromFile("ITM_Green/0.bmp") ;
  Image6->Picture->LoadFromFile("ITM_Green/"+IntToStr(c2)+".bmp") ;
  Image7->Picture->LoadFromFile("ITM_Green/"+IntToStr(c3)+"d.bmp") ;
  Image8->Picture->LoadFromFile("ITM_Green/"+IntToStr(c4)+".bmp") ;
  }
    if (100<=StrToInt(Edit1->Text)<250)
 {
  Image1->Picture->LoadFromFile("ITM_Green/"+IntToStr(c)+".bmp") ;
  Image6->Picture->LoadFromFile("ITM_Green/"+IntToStr(c2)+".bmp") ;
  Image7->Picture->LoadFromFile("ITM_Green/"+IntToStr(c3)+"d.bmp") ;
  Image8->Picture->LoadFromFile("ITM_Green/"+IntToStr(c4)+".bmp") ;
 }
//-----------------------------------------------------------------------------

}
//------------------------------------------------------------------------------
                prozent = (((TrackBar1->Position)-60)*0.01/1.9)*100;
                Panel6->Caption = FloatToStrF(prozent,ffFixed,4,2)+"%";
//------------------------------------------------------------------------------
k1=(max2-min2)*0.01/1.9;
   x11=min2+(TrackBar1->Position-60)*k1;
   x=min2+(TrackBar1->Position-60)*k1;
   c=(x-x%100)/100;                        //перша цифра числа
   c2=((x-x%10)-(x-x%100))/10;  //друга цифра
   c3=x%10;                                      //третя цифра
   ch=ceil((x11-x)*10);
   c4=ch;                       //цифра після коми
  if (TrackBar1->Position<=99)
 {
  Image13->Picture->LoadFromFile("ITM_Green/nil.bmp") ;
  if(x<10)
  {
  Image14->Picture->LoadFromFile("ITM_Green/nil.bmp") ;
  }
  if(x>=10)
  {
  Image14->Picture->LoadFromFile("ITM_Green/"+IntToStr(c2)+".bmp") ;
  }
  Image15->Picture->LoadFromFile("ITM_Green/"+IntToStr(c3)+"d.bmp") ;
  //Image16->Picture->LoadFromFile("ITM_Green/"+IntToStr(c4)+".bmp") ;
  }
    if (100<=TrackBar1->Position<250)
 {
   if(x != 100)
   {
    Image13->Picture->LoadFromFile("ITM_Green/nil.bmp") ;
    //Image16->Picture->LoadFromFile("ITM_Green/"+IntToStr(c4)+".bmp");
   }
   if(x == 100)
   {
    Image13->Picture->LoadFromFile("ITM_Green/"+IntToStr(c)+".bmp") ;
      Image16->Picture->LoadFromFile("ITM_Green/nil.bmp");
   }
  Image14->Picture->LoadFromFile("ITM_Green/"+IntToStr(c2)+".bmp") ;
  Image15->Picture->LoadFromFile("ITM_Green/"+IntToStr(c3)+"d.bmp") ;
}
//-----------------------------------------------------------------------------
                CGauge17->Progress =0;
         }
}
//---------------------------------------------------------------------------

void __fastcall TForm18::Button1Click(TObject *Sender)
{
Timer2->Enabled = true;
Timer3->Enabled = true;
Timer23->Enabled = false;
Timer24->Enabled = false;
Timer25->Enabled = false;
Panel7->Visible = false;
TrackBar2->Visible = false;
Panel8->Visible = false;
Panel1->Visible = true;
TrackBar1->Visible = true;
Panel2->Visible = true;
}
//---------------------------------------------------------------------------




void __fastcall TForm18::Button2Click(TObject *Sender)
{
Timer2->Enabled = false;
Timer3->Enabled = false;
Timer23->Enabled = true;
Timer24->Enabled = true;
Timer25->Enabled = true;
Panel1->Visible = false;
TrackBar1->Visible = false;
Panel2->Visible = false;
Panel7->Visible = true;
TrackBar2->Visible = true;
Panel8->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm18::Timer23Timer(TObject *Sender)
{
Timer24->Enabled = true;
        k1=(max2-min2)*0.01;
   x11=min2+(TrackBar2->Position)*k1;
   x=min2+(TrackBar2->Position)*k1;
   c=(x-x%100)/100;                        //перша цифра числа
   c2=((x-x%10)-(x-x%100))/10;  //друга цифра
   c3=x%10;                                      //третя цифра
   ch=ceil((x11-x)*10);
   c4=ch;                       //цифра після коми
  if (TrackBar2->Position<=100)
 {
  Image13->Picture->LoadFromFile("ITM_Green/nil.bmp") ;
  if(x<10)
  {
  Image14->Picture->LoadFromFile("ITM_Green/nil.bmp") ;
  }
  if(x>=10)
  {
  Image14->Picture->LoadFromFile("ITM_Green/"+IntToStr(c2)+".bmp") ;
  }
  Image15->Picture->LoadFromFile("ITM_Green/"+IntToStr(c3)+"d.bmp") ;
  //Image16->Picture->LoadFromFile("ITM_Green/"+IntToStr(c4)+".bmp") ;
  }
    if (0<=TrackBar2->Position<100)
 {
   if(x != 100)
   {
    Image13->Picture->LoadFromFile("ITM_Green/nil.bmp") ;
    //Image16->Picture->LoadFromFile("ITM_Green/"+IntToStr(c4)+".bmp");
   }
   if(x == 100)
   {
    Image13->Picture->LoadFromFile("ITM_Green/"+IntToStr(c)+".bmp") ;
      Image16->Picture->LoadFromFile("ITM_Green/nil.bmp");
   }
  Image14->Picture->LoadFromFile("ITM_Green/"+IntToStr(c2)+".bmp") ;
  Image15->Picture->LoadFromFile("ITM_Green/"+IntToStr(c3)+"d.bmp") ;
}
  //  Timer24->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm18::Timer24Timer(TObject *Sender)
{
k1=(max2-min2)*0.01/0.526318;
   x11=min+(TrackBar2->Position)*k1;
   x=min+(TrackBar2->Position)*k1;
   Edit2->Text = x;
   if (x == 249.9)
    {x=250;}
   c=(x-x%100)/100;                        //перша цифра числа
   c2=((x-x%10)-(x-x%100))/10;  //друга цифра
   c3=x%10;                                      //третя цифра
   ch=ceil((x11-x)*10);
   c4=ch;                       //цифра після коми
  if (TrackBar2->Position<48)
 {
  Image9->Picture->LoadFromFile("ITM_Yellow/0 копия.bmp") ;
  Image10->Picture->LoadFromFile("ITM_Yellow/"+IntToStr(c2)+" копия.bmp") ;
  Image11->Picture->LoadFromFile("ITM_Yellow/"+IntToStr(c3)+"d копия.bmp") ;
  Image12->Picture->LoadFromFile("ITM_Yellow/"+IntToStr(c4)+" копия.bmp") ;
  }
    if (48<=TrackBar2->Position<=100)
 {
  Image9->Picture->LoadFromFile("ITM_Yellow/"+IntToStr(c)+" копия.bmp") ;
  Image10->Picture->LoadFromFile("ITM_Yellow/"+IntToStr(c2)+" копия.bmp") ;
  Image11->Picture->LoadFromFile("ITM_Yellow/"+IntToStr(c3)+"d копия.bmp") ;
  Image12->Picture->LoadFromFile("ITM_Yellow/"+IntToStr(c4)+" копия.bmp") ;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm18::Timer25Timer(TObject *Sender)
{
CGauge17->Progress += 5;
if(CGauge17->Progress == 100)
{
//------------------------------------------------------------------------------
// Panel4->Caption = (TrackBar1->Position);
if(StrToInt(Edit2->Text)> StrToInt(Edit3->Text))
{
        Edit3->Text = (StrToInt(Edit3->Text)+1);
        Panel5->Caption = Edit3->Text;
//-----------------------------------------------------------------------------
   c=(StrToInt(Edit3->Text)+1-(StrToInt(Edit3->Text)+1)%100)/100;                        //перша цифра числа
   c2=((StrToInt(Edit3->Text)+1-(StrToInt(Edit3->Text)+1)%10)-(StrToInt(Edit3->Text)+1-(StrToInt(Edit3->Text)+1)%100))/10;  //друга цифра
   c3=(StrToInt(Edit3->Text)+1)%10;                                      //третя цифра
   ch=0;
   c4=ch;                       //цифра після коми
  if (TrackBar2->Position<99)
 {
  Image1->Picture->LoadFromFile("ITM_Green/0.bmp") ;
  Image6->Picture->LoadFromFile("ITM_Green/"+IntToStr(c2)+".bmp") ;
  Image7->Picture->LoadFromFile("ITM_Green/"+IntToStr(c3)+"d.bmp") ;
  Image8->Picture->LoadFromFile("ITM_Green/"+IntToStr(c4)+".bmp") ;
  }
    if (0<=TrackBar2->Position<=100)
 {
  Image1->Picture->LoadFromFile("ITM_Green/"+IntToStr(c)+".bmp") ;
  Image6->Picture->LoadFromFile("ITM_Green/"+IntToStr(c2)+".bmp") ;
  Image7->Picture->LoadFromFile("ITM_Green/"+IntToStr(c3)+"d.bmp") ;
  Image8->Picture->LoadFromFile("ITM_Green/"+IntToStr(c4)+".bmp") ;
 }
//-----------------------------------------------------------------------------
}

if(StrToInt(Edit2->Text) < StrToInt(Edit3->Text))
{
        Edit3->Text = (StrToInt(Edit3->Text)-1);
        Panel5->Caption = Edit3->Text;
        //-----------------------------------------------------------------------------
   c=(StrToInt(Edit3->Text)-1-(StrToInt(Edit3->Text)-1)%100)/100;                        //перша цифра числа
   c2=((StrToInt(Edit3->Text)-1-(StrToInt(Edit3->Text)-1)%10)-(StrToInt(Edit3->Text)-1-(StrToInt(Edit3->Text)-1)%100))/10;  //друга цифра
   c3=(StrToInt(Edit3->Text)-1)%10;                                      //третя цифра
   ch=0;
   c4=ch;                       //цифра після коми
  if (StrToInt(Edit3->Text)<99)
 {
  Image1->Picture->LoadFromFile("ITM_Green/0.bmp") ;
  Image6->Picture->LoadFromFile("ITM_Green/"+IntToStr(c2)+".bmp") ;
  Image7->Picture->LoadFromFile("ITM_Green/"+IntToStr(c3)+"d.bmp") ;
  Image8->Picture->LoadFromFile("ITM_Green/"+IntToStr(c4)+".bmp") ;
  }
    if (0<=StrToInt(Edit3->Text)<=100)
 {
  Image1->Picture->LoadFromFile("ITM_Green/"+IntToStr(c)+".bmp") ;
  Image6->Picture->LoadFromFile("ITM_Green/"+IntToStr(c2)+".bmp") ;
  Image7->Picture->LoadFromFile("ITM_Green/"+IntToStr(c3)+"d.bmp") ;
  Image8->Picture->LoadFromFile("ITM_Green/"+IntToStr(c4)+".bmp") ;
 }
//-----------------------------------------------------------------------------

}
CGauge17->Progress = 0;
}
}
//---------------------------------------------------------------------------


