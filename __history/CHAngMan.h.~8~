#ifndef _CHANGMAN_h
#define _CHANGMAN_h
#include <string>
class CHangman
{
public:
	CHangman(int l = 5);
	bool EstaEnPalabra (char letra);
	char *ReemplarAste(char letra );
	bool Ganaste();
	char *Get_Asterisco();
	char *Get_Palabra();
	int Get_position();
	int Get_lives();
	void restarVida(){
	lives--;}
	void resetearVida(){
	lives=5;}
	void resetearJuego(){

	Randomize();
	position= Random(14);
	strcpy(Palabra, Animales [position]);
	strcpy(asteriscos,ConvertirAste());
	}

	std::string convertirMP3(int pos){
		std::string animal = Animales[pos];
		std::string palabrita = animal + ".mp3";
	   return  palabrita;
	}

 private:
	char *ConvertirAste( );
	char  Palabra[256];
	char letra[1];
	int lives;
	char asteriscos[256];
	char a[256];
	static char *Animales[];
	int position;



};

char * CHangman::Animales[] = {"GATO","PATO","OVEJA","CABALLO","VACA","GALLINA","POLLO","CHANCHO","PALOMA", "CONEJO","PERRO","TERO","LECHUZA","BURRO"};
CHangman::CHangman(int l)
{
	lives= l;
	Randomize();
	position= Random(14);
	strcpy(Palabra, Animales [position]);
	strcpy(asteriscos,ConvertirAste());
	//strcpy(a,asteriscos);
}
 char *CHangman::Get_Asterisco()
 {
 return asteriscos;
 }
  char *CHangman::Get_Palabra()
 {
 return Palabra;
 }
 int CHangman::Get_position()
 {
 return position;
 }
  int CHangman::Get_lives()
 {
 return lives;
 }

char *CHangman::ConvertirAste()
{
int i;
char aux[256];
char ast= '*';
int n=strlen(Palabra);
for ( i=0; i < n; i++)
 {
  aux[i]=ast;
}
  aux[i]='/0';
return (aux);
}


bool CHangman::EstaEnPalabra (char letra)
 {
	 bool flag= false;
	 int n=strlen(Palabra);
	 for(int i=0; i<n;i++)
		{
			if(Palabra[i]== letra)
				{
					flag= true;
					this->ReemplarAste(letra);
				}
		}
	return flag;
 }

 char *CHangman::ReemplarAste(char letra )
	  {
	  int i;


int n=strlen(Palabra);
for ( i=0; i < n; i++)
 {
	if(Palabra[i]==letra)
	{
		asteriscos[i]=letra;
	}

}
return (asteriscos);

	  }

 bool CHangman::Ganaste()
 {
int i;

 bool flag = true;
int n=strlen(asteriscos);
for ( i=0; i < n; i++)
 {
	if(asteriscos[i]=='*')
	{
	flag = false;
	}
 }
	  return flag;


 }


#endif