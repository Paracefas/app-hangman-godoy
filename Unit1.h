//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Objects.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <FMX.ImgList.hpp>
#include <System.ImageList.hpp>
#include "CHAngMan.h"
#include <FMX.Colors.hpp>
#include <FMX.Ani.hpp>
#include <FMX.Media.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TImageList *ImageList1;
	TImageList *ImageList2;
	TSpeedButton *AHORCADO;
	TMediaPlayer *MediaPlayer1;
	TPanel *Panel1;
	TColorBox *ColorBox1;
	TColorBox *ColorBox4;
	TPanel *Panel2;
	TColorBox *ColorBox2;
	TText *Text3;
	TGlyph *Glyph2;
	TPanel *Panel3;
	TText *Text1;
	TSpeedButton *A;
	TSpeedButton *B;
	TSpeedButton *C;
	TSpeedButton *D;
	TSpeedButton *E;
	TSpeedButton *F;
	TSpeedButton *G;
	TGlyph *Glyph1;
	TSpeedButton *H;
	TSpeedButton *I;
	TSpeedButton *J;
	TSpeedButton *K;
	TSpeedButton *L;
	TSpeedButton *M;
	TSpeedButton *N;
	TSpeedButton *Nueva_Palabra;
	TSpeedButton *O;
	TSpeedButton *P;
	TSpeedButton *Q;
	TSpeedButton *R;
	TSpeedButton *Resetear;
	TSpeedButton *S;
	TSpeedButton *SpeedButton1;
	TSpeedButton *T;
	TText *Text2;
	TSpeedButton *U;
	TSpeedButton *V;
	TSpeedButton *W;
	TSpeedButton *X;
	TSpeedButton *Y;
	TSpeedButton *Z;
	void __fastcall SpeedButton1Click(TObject *Sender);
	void __fastcall AClick(TObject *Sender);
	void __fastcall BClick(TObject *Sender);
	void __fastcall CClick(TObject *Sender);
	void __fastcall DClick(TObject *Sender);
	void __fastcall EClick(TObject *Sender);
	void __fastcall GClick(TObject *Sender);
	void __fastcall FClick(TObject *Sender);
	void __fastcall HClick(TObject *Sender);
	void __fastcall IClick(TObject *Sender);
	void __fastcall JClick(TObject *Sender);
	void __fastcall KClick(TObject *Sender);
	void __fastcall LClick(TObject *Sender);
	void __fastcall MClick(TObject *Sender);
	void __fastcall NClick(TObject *Sender);
	void __fastcall OClick(TObject *Sender);
	void __fastcall PClick(TObject *Sender);
	void __fastcall QClick(TObject *Sender);
	void __fastcall RClick(TObject *Sender);
	void __fastcall SClick(TObject *Sender);
	void __fastcall TClick(TObject *Sender);
	void __fastcall UClick(TObject *Sender);
	void __fastcall VClick(TObject *Sender);
	void __fastcall WClick(TObject *Sender);
	void __fastcall XClick(TObject *Sender);
	void __fastcall YClick(TObject *Sender);
	void __fastcall ZClick(TObject *Sender);
	void __fastcall PLAYClick(TObject *Sender);
	void __fastcall ResetearClick(TObject *Sender);
	void __fastcall Nueva_PalabraClick(TObject *Sender);
private:	CHangman Hangman;
public:
   //	TSpeedButton *array[24];
	TSpeedButton *array[26];
void actualizar(char letra, TSpeedButton *botton);
void reset();
void resetLetras(  TSpeedButton *);	// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
