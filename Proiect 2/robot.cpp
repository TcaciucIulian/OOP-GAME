#include<iostream>
#include "clase.h"
#include "robot.h"

A::A(int pozitieLinie, int pozitieColoana,const char *numeRobot,const char *numeItem)
{
 xA=pozitieLinie;
 yA=pozitieColoana;
 numeA=*numeRobot;
 itemA=*numeItem;
}
void A::setXA(int pozitie)
{
 xA=pozitie;
}
int A::getXA()
{
 return xA;
}
void A::setYA(int pozitie)
{
 yA=pozitie;
}
int A::getYA()
{
 return yA;
}

char A::getNumeA()
{
 return numeA;
}
char A::getItemA()
{
 return itemA;
}

void A::moveA(Game &mapa)
{
 if(xA==mapa.getLocatieX() && yA==mapa.getLocatieY()) cout<<" Joc terminat | robotul a castigat jocul  ";
    else if(xA==mapa.getLinie()-1)
        {
        xA=0;
        yA=yA+1;
        cout<< " Robotul s-a mutat pe pozitia "<< xA <<" "<< yA <<endl;
        }
        else
            {
            xA=xA+1;
            cout<< " Robotul s-a mutat pe pozitia "<<xA<<" "<< yA<<endl;
            }
}

B::B(int pozitieLinie, int pozitieColoana,const char *numeRobot,const char *numeItem)
{
 xB=pozitieLinie;
 yB=pozitieColoana;
 numeB=*numeRobot;
 itemB=*numeItem;
}
void B::setXB(int pozitie)
{
 xB=pozitie;
}
void B::setYB(int pozitie)
{
 yB=pozitie;
}

int B::getXB()
{
 return xB;
}

int B::getYB()
{
 return yB;
}

char B::getNumeB()
{
 return numeB;
}
char B::getItemB()
{
 return itemB;
}
void B::moveB(Game &mapa)
{
 if(xB==mapa.getLocatieX() && yB==mapa.getLocatieY()) cout<< " JOC TERMINAT ";
  else if(yB==mapa.getColoana()) {yB=0;
                                  xB=xB+1;
                                  cout<< " Robotul s-a mutat pe pozitia "<< xB <<" "<< yB <<endl;
                                 }
   else { yB=yB+1;
          cout<< " Robotul s-a mutat pe pozitia "<< xB <<" "<< yB <<endl;
        }
}


C::C(int pozitieLinie, int pozitieColoana,const char *numeRobot,const char *numeItem)
{
 xC=pozitieLinie;
 yC=pozitieColoana;
 numeC=*numeRobot;
 itemC=*numeItem;
}
void C::setXC(int pozitie)
{
 xC=pozitie;
}
void C::setYC(int pozitie)
{
 yC=pozitie;
}
int C::getXC()
{
 return xC;
}

int C::getYC()
{
 return yC;
}

char C::getNumeC()
{
 return numeC;
}

char C::getItemC()
{
 return itemC;
}
void C::moveC(Game &mapa)
{

 if(xC==mapa.getLocatieX() && yC==mapa.getLocatieY()) cout<<" Joc terminat ";
  else if(xC>mapa.getLinie() || yC>mapa.getColoana()) cout<<" Am iesit de pe harta ";
    else { xC=xC+1;
           yC=yC+1;
           cout<< " Robotul s-a mutat pe pozitia "<< xC <<" "<< yC <<endl;
         }
}
