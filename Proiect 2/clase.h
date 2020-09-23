
#ifndef CLASE_H_INCLUDED
#define CLASE_H_INCLUDED
using namespace std;
class Game
 {
   char **harta; // harta ;
   int linie; // numarul de linii;
   int coloana; // numarul de coloane
   int locatiex; // locatie linie unde se afla finalul;
   int locatiey; // locatie coloana unde se afla finalul;
 public:

   Game(int n,int m); // constructor;
   virtual  ~Game(); // destructor;
   char** getHarta() { return harta; }; // returneaza harta;

   virtual void setPozitie(int x, int pornireX, int pornireY); // funcite pentru setare pozitie pe harta
   int getLinie(); // returneaza linie;
   int getColoana(); // returneaza coloana;
   void setLocatieX(); // seteaza locatie linie pentru final;
   void setLocatieY(); // seteazz locatie coloaan pentru final;
   int getLocatieX(); // returneaza locatie linie pentur final;
   int getLocatieY(); // returneaza locatie coloana pentru final;

   int initializareHarta(Game &,char **,int &); // initializeaza harta
   void joculet(Game &, char**,int ); // desfasurarea jocului
   const Game operator=(const Game&op); // operator " = ";
   char* &operator[](int i); // operator [];
 };
#endif // CLASE_H_INCLUDED
