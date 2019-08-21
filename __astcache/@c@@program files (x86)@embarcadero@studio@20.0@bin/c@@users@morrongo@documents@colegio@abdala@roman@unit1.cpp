//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop


#include "Unit1.h"
#include "CHAngMan.h"
#include<string>

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
#pragma resource ("*.LgXhdpiPh.fmx", _PLAT_ANDROID)
#pragma resource ("*.iPhone55in.fmx", _PLAT_IOS)
#pragma resource ("*.LgXhdpiTb.fmx", _PLAT_ANDROID)
#pragma resource ("*.Windows.fmx", _PLAT_MSWINDOWS)

TForm1 *Form1;

  bool Presionado=false;
  char letra[1];
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	array[0]= A;
	array[1]= B;
	array[2]= C;
	array[3]= D;
	array[4]= E;
	array[5]= F;
	array[6]= G;
	array[7]= H;
	array[8]= I;
	array[9]= J;
	array[10]= K;
	array[11]= L;
	array[12]= M;
	array[13]= N;
	array[14]= O;
	array[15]= P;
	array[16]= Q;
	array[17]= R;
	array[18]= S;
	array[19]= T;
	array[20]= U;
	array[21]= V;
	array[22]= W;
	array[23]= X;
	array[24]= Y;
	array[25]= Z;


}
//---------------------------------------------------------------------------
void __fastcall TForm1::SpeedButton1Click(TObject *Sender)
{

//strcpy(Palabra,"AAAAA");


	Text1->Visible=true;
	Text1->Text= Hangman.Get_Asterisco();       //asterisco
	Text2->Text= Hangman.Get_Palabra();             //get palabra
	Glyph1->ImageIndex= Hangman.Get_position();       //imagen de index
	Text3->Text= Hangman.Get_lives();          //texto de vidas
	SpeedButton1-> Visible=false;          //boton
	Nueva_Palabra->Visible= true;   //boton
	Resetear->Visible=true;
	Text3->Visible=true;
	Presionado=true;
	//boton
	//Resetear->Position->X=300;
	//Resetear->Position->Y=560;
	//Resetear->Size->Width=300;
	int pos =  Hangman.Get_position();
	MediaPlayer1->FileName= Hangman.convertirMP3(pos).c_str();
	MediaPlayer1->Play();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AClick(TObject *Sender)
{
	actualizar('A', A);
}

void TForm1::actualizar (char letraIngreso, TSpeedButton *button)
{
	//strcpy(letra,letraIngreso);
	if(Presionado==true){
	if( Hangman.EstaEnPalabra(letraIngreso))//letra))
	{
		//strcpy(asteriscos,Hangman.ReemplarAste(Palabra,a,letra));
		//Ahora lo hace CHANGMAN
		Text1->Text= Hangman.Get_Asterisco();
		}
	else
	{
		Hangman.restarVida();
		Text3->Text=Hangman.Get_lives();
	}
	if(Hangman.Ganaste() )
	{
	 ShowMessage ("Ganaste");
	}

	if(Hangman.Get_lives()<=0)
	{

	 ShowMessage ("Perdiste");
	// button->Visible=false;
		Text3->Visible=false;
	}

	}

}
void TForm1::reset()
{
	Hangman.resetearJuego();

	Glyph1->Visible=false;                         //imagen
	Text1->Visible=false;      //asterisco
	Text2->Visible=false;             //get palabra
	Text3->Visible=false;          //texto de vidas
	SpeedButton1-> Visible=true;          //boton
	Nueva_Palabra->Visible= false;   //boton
	Resetear->Visible=false;
	 Presionado=false;

	}

//---------------------------------------------------------------------------

void __fastcall TForm1::BClick(TObject *Sender)
{
	 actualizar('B', B);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CClick(TObject *Sender)
{
	   actualizar('C', C);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DClick(TObject *Sender)
{
		actualizar('D', D);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::EClick(TObject *Sender)
{
	actualizar('E', E);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::GClick(TObject *Sender)
{
	actualizar('G', G);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FClick(TObject *Sender)
{
	actualizar('F', F);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::HClick(TObject *Sender)
{
	actualizar('H', H);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::IClick(TObject *Sender)
{
actualizar('I', I);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::JClick(TObject *Sender)
{
actualizar('J', J);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::KClick(TObject *Sender)
{
actualizar('K', K);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::LClick(TObject *Sender)
{
actualizar('L', L);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::MClick(TObject *Sender)
{
actualizar('M', M);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::NClick(TObject *Sender)
{
actualizar('N', N);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::OClick(TObject *Sender)
{
actualizar('O', O);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::PClick(TObject *Sender)
{
actualizar('P', P);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::QClick(TObject *Sender)
{
actualizar('Q', Q);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RClick(TObject *Sender)
{
actualizar('R', R);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SClick(TObject *Sender)
{
actualizar('S', S);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TClick(TObject *Sender)
{
actualizar('T', T);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::UClick(TObject *Sender)
{
actualizar('U', U);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::VClick(TObject *Sender)
{
actualizar('V', V);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::WClick(TObject *Sender)
{
actualizar('W', W);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::XClick(TObject *Sender)
{
actualizar('X', X);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::YClick(TObject *Sender)
{
actualizar('Y', Y);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ZClick(TObject *Sender)
{
actualizar('Z', Z);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::PLAYClick(TObject *Sender)
{
	Panel1->Visible=false;
	Panel2->Visible=true;

}
//---------------------------------------------------------------------------


void TForm1::resetLetras(TSpeedButton *botonColor){
	botonColor->Visible=true;
}




void __fastcall TForm1::ResetearClick(TObject *Sender)
{
	Hangman.resetearVida();
	Text3->Text= Hangman.Get_lives();

	for (int i = 0; i < 26; i++) {

		 resetLetras(array[i]);

	}

	reset();

}
//---------------------------------------------------------------------------


void __fastcall TForm1::Nueva_PalabraClick(TObject *Sender)
{
	Hangman.resetearJuego();
	Text1->Text= Hangman.Get_Asterisco();       //asterisco
	Text2->Text= Hangman.Get_Palabra();             //get palabra
	Glyph1->ImageIndex= Hangman.Get_position();       //imagen de index
	for (int i = 0; i < 26; i++) {

		 resetLetras(array[i]);

	}
    int pos =  Hangman.Get_position();
	MediaPlayer1->FileName= Hangman.convertirMP3(pos).c_str();
	MediaPlayer1->Play();


}
//---------------------------------------------------------------------------













//---------------------------------------------------------------------------


