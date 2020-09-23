
#ifndef ROBOT_H_INCLUDED
#define ROBOT_H_INCLUDED



#endif // ROBOT_H_INCLUDED

class Robot
{
public:;
    Robot() {};
    virtual ~Robot() {};
};
// tipul 1 de robot ;
class A : public Robot
{
    int xA; // pozitie plecare linie robot;
    int yA; // pozitie plecare coloana robot;
    char numeA; // nume robot;
    char itemA; // item robot;
public :
    A(int,int,const char *,const char *); // constructor
    void setXA(int); // set pozitie robot;
    void setYA(int); // set pozitie robot;
    int getXA(); // get pozitie xA;
    int getYA(); // get pozitie yA;
    char getNumeA(); // get nume robot;
    char getItemA(); // get nume item;
    void moveA(Game &mapa); // functie miscare robot;
};

class B : public Robot
 {
    int xB; // pozitie plecare linie robot;
    int yB; // pozitie plecare coloana robot;
    char numeB; // nume robot;
    char itemB; // item robot;
 public:
    B(int,int,const char*,const  char*); // constructor
    void setXB(int ); // set pozitie robot;
    void setYB(int ); // set pozitie robot;
    int getXB(); // get pozitie xB;
    int getYB(); // get pozitie yB;
    char getNumeB(); // get nume robot;
    char getItemB(); // get nume item;
    void moveB(Game &mapa); // functie miscare robot;
 };

class C: public Robot
 {
    int xC; // pozitie plecare linie robot;
    int yC; // pozitie plecare coloana robot;
    char numeC; // nume robot;
    char itemC; // item robot;
 public:
    C(int,int,const char*,const char *); // constructor
    void setXC(int ); // set pozitie robot;
    void setYC(int ); // set pozitie robot;
    int getXC(); // get pozitie xB;
    int getYC(); // get pozitie yB;
    char getNumeC(); // get nume robot;
    char getItemC(); // get nume item;
    void moveC(Game &mapa); // functie miscare robot;
 };

