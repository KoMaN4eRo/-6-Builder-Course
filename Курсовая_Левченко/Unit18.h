//---------------------------------------------------------------------------

#ifndef Unit18H
#define Unit18H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include <ComCtrls.hpp>
#include <Chart.hpp>
#include <TeEngine.hpp>
#include <TeeProcs.hpp>
#include <Series.hpp>
#include <Graphics.hpp>
#include "CGAUGES.h"
//---------------------------------------------------------------------------
class TForm18 : public TForm
{
__published:	// IDE-managed Components
        TTrackBar *TrackBar1;
        TChart *Chart1;
        TPanel *Panel3;
        TPanel *Panel4;
        TPanel *Panel5;
        TFastLineSeries *Series1;
        TFastLineSeries *Series2;
        TStaticText *StaticText1;
        TImage *Image5;
        TPanel *Panel6;
        TImage *Image44;
        TPanel *Panel2;
        TImage *Image49;
        TPanel *Panel1;
        TButton *Button1;
        TButton *Button2;
        TLabel *Label4;
        TLabel *Label6;
        TButton *Button3;
        TButton *Button4;
        TTimer *Timer1;
        TTimer *Timer2;
        TTimer *Timer3;
        TImage *Image1;
        TCGauge *CGauge1;
        TCGauge *CGauge2;
        TCGauge *CGauge4;
        TCGauge *CGauge5;
        TTimer *Timer4;
        TTimer *Timer5;
        TTimer *Timer6;
        TCGauge *CGauge6;
        TCGauge *CGauge7;
        TCGauge *CGauge8;
        TCGauge *CGauge9;
        TCGauge *CGauge10;
        TCGauge *CGauge11;
        TCGauge *CGauge12;
        TTimer *Timer7;
        TTimer *Timer8;
        TTimer *Timer9;
        TCGauge *CGauge3;
        TCGauge *CGauge13;
        TShape *Shape1;
        TShape *Shape2;
        TShape *Shape3;
        TShape *Shape4;
        TShape *Shape5;
        TShape *Shape6;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall TrackBar1Change(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
        void __fastcall Timer1Timer(TObject *Sender);
        void __fastcall Timer2Timer(TObject *Sender);
        void __fastcall Timer3Timer(TObject *Sender);
        void __fastcall Timer4Timer(TObject *Sender);
        void __fastcall Timer5Timer(TObject *Sender);
        void __fastcall Timer6Timer(TObject *Sender);
        void __fastcall Timer7Timer(TObject *Sender);
        void __fastcall Timer9Timer(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm18(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm18 *Form18;
//---------------------------------------------------------------------------
#endif
