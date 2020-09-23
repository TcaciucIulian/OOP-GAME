#include<iostream>
#include "clase.h"
#include "robot.h"

using namespace std;
Game::Game(int n, int m)
{
 linie=n;
 coloana=m;
 harta=new char*[n];
 for(int i=0;i<linie;i++)
    harta[i]=new char[m];

 for(int i=0;i<linie;i++)
    for(int j=0;j<coloana;j++)
      harta[i][j]='*';


}
Game::~Game()
{
 for(int i=0;i<linie;i++)
    delete harta[i];
 delete harta;

}
void Game::setPozitie(int x, int locatiex, int locatiey)
{
 harta[locatiex][locatiey]=x;
}

char* &Game::operator[](int i)
{
 return harta[i];
}

int Game::getLinie()
{
 return linie;
}

int Game::getColoana()
{
 return coloana;
}

void Game::setLocatieX()
{
 locatiex=1+(rand()%(int)(linie-1));
}
void Game::setLocatieY()
{
 locatiey=1+(rand()%(int)(coloana-1));
}
int Game::getLocatieX()
{
 return locatiex;
}
int Game::getLocatieY()
{
 return locatiey;
}

int Game::initializareHarta(Game &mapa, char **harta,int &alegere)
{
 A *robot1=new A(0,0,"a","i");
 B *robot2=new B(0,0,"b","j");
 C *robot3=new C(0,0,"c","k");

 // setam locatie care este generata random si o afisam;
 mapa.setLocatieX();
 cout<<" Pozitie iesire linie = "<<mapa.getLocatieX()<<endl;
 mapa.setLocatieY();
 cout<<" Pozitie iesire coloana = "<<mapa.getLocatieY()<<endl;
 mapa.setPozitie('F',mapa.getLocatieX(),mapa.getLocatieY());


 cout<<" Alegeti robot din 1,2 sau 3 = ";
 cin>>alegere;

 // in functie de alegerea tipului de robot, se va initializa harta cu informatiile robotului respectiv ( nume, 4 itemi, pozitie finala, pozitie initiala)
 switch(alegere)
  {
    case 1:
        {
         mapa.setPozitie(robot1->getNumeA(),robot1->getXA(),robot1->getYA());
         int x=1;
         int y=1;
         int i=1;
         while(i<5)
         {
            x=x+rand()%(int)(mapa.getLinie()-x);
            y=y+rand()%(int)(mapa.getColoana()-y);
            mapa.setPozitie(robot1->getItemA(),x,y);
            mapa.setPozitie(robot1->getItemA(),5,0);
            i++;
         }
         break;
        }
    case 2:
        {
         mapa.setPozitie(robot2->getNumeB(),robot2->getXB(),robot2->getYB());
         int x=2;
         int y=2;
         int i=1;
         while(i<5)
         {
            x=x+rand()%(int)(mapa.getLinie()-x);
            y=y+rand()%(int)(mapa.getColoana()-y);
            mapa.setPozitie(robot2->getItemB(),x,y);
            mapa.setPozitie(robot2->getItemB(),1,4);
            i++;
         }
         break;
        }
    case 3:
        {
         mapa.setPozitie(robot3->getNumeC(),robot3->getXC(),robot3->getYC());
         int x=3;
         int y=3;
         int i=1;
         while(i<5)
         {
            x=x+rand()%(int)(mapa.getLinie()-x);
            y=y+rand()%(int)(mapa.getColoana()-y);
            mapa.setPozitie(robot3->getItemC(),x,y);
            mapa.setPozitie(robot3->getItemC(),3,3);
            i++;
         }
         break;
        }
    default:
        cout<<endl<<endl<<"warning : Alegere gresita si jocul se termina la primul pas "<<endl;
 }
return **harta;

}

// desfasurarea jocului
void Game::joculet(Game &mapa, char **harta, int alegere)
{
 A *robot1=new A(0,0,"a","i");
 B *robot2=new B(0,0,"b","j");
 C *robot3=new C(0,0,"c","k");
if(alegere==1)
    {
    // daca nu am ajuns pe pozitia finala;
    while(robot1->getXA()!=mapa.getLocatieX() || robot1->getYA()!=mapa.getLocatieY())
         {
        // se alege daca dorim sa continuam;
        int continuare=0;
        cout<<" Pentru pasul urmator apasati tasta 1 -> ";
        cin>>continuare;
        cout<<" Pas "<<endl;
        if(continuare==1)
        {
        if(robot1->getXA() == mapa.getLinie() && robot1->getYA() == mapa.getColoana() ) break;
            else
                {
                for(int i=0;i<mapa.getLinie();i++)
                    {
                    cout<<endl;
                    for(int j=0;j<mapa.getColoana();j++)
                    cout<<harta[i][j]<<" ";
                    }

                harta[robot1->getXA()][robot1->getYA()]='*';
                robot1->moveA(mapa); // miscarea;
                if(harta[robot1->getXA()][robot1->getYA()]==robot1->getItemA())
                 {
                   robot1->setXA(mapa.getLocatieX());
                   robot1->setYA(mapa.getLocatieY());
                   cout<<endl<<" Am dat peste item ce ma teleporteaza la final ";
                 }
                cout<<endl;
                harta[robot1->getXA()][robot1->getYA()]=robot1->getNumeA();

                }
        }
        else break;
        if(robot1->getXA()==mapa.getLocatieX() && robot1->getYA()==mapa.getLocatieY()) cout<<" Joc terminat | robotul a ajuns la locatia finala ";
        }
    }
  else if(alegere==2)
  {
    while(robot2->getXB()!=mapa.getLocatieX() || robot2->getYB()!=mapa.getLocatieY())
    {
        int continuare=0;
        cout<<" Pentru pasul urmator apasati tasta 1 -> ";
        cin>>continuare;
        cout<<" Pas "<<endl;
        if(continuare==1)
        {
        if(robot2->getXB() == mapa.getLinie() && robot2->getYB() == mapa.getColoana() ) break;
            else
                {
                for(int i=0;i<mapa.getLinie();i++)
                    {
                    cout<<endl;
                    for(int j=0;j<mapa.getColoana();j++)
                    cout<<harta[i][j]<<" ";
                    }

                harta[robot2->getXB()][robot2->getYB()]='*';
                robot2->moveB(mapa);
                if(harta[robot2->getXB()][robot2->getYB()]==robot2->getItemB())
                 {
                   robot2->setXB(robot2->getXB()+1);
                   robot2->setYB(robot2->getYB());
                   cout<<endl<<" Am dat peste item ";
                 }
                cout<<endl;
                harta[robot2->getXB()][robot2->getYB()]=robot2->getNumeB();
                }
        }
       else break;
    }

    if(robot2->getXB()==mapa.getLocatieX() && robot2->getYB()==mapa.getLocatieY()) cout<<" Joc terminat | robotul a ajuns la locatia finala ";
  }
  else if(alegere==3)
  {
    while(robot3->getXC()!=mapa.getLocatieX() || robot3->getYC()!=mapa.getLocatieY())
    {
        int continuare=0;
        cout<<" Pentru pasul urmator apasati tasta 1 -> ";
        cin>>continuare;
        cout<<" Pas "<<endl;
        if(continuare==1)
        {
        if(robot3->getXC() == mapa.getLinie() && robot3->getYC() == mapa.getColoana() ) break;
            else
                {
                // cout<<robot1.getXA()<<" "<<robot1.getYA()<<" "<<endl;
                for(int i=0;i<mapa.getLinie();i++)
                    {
                    cout<<endl;
                    for(int j=0;j<mapa.getColoana();j++)
                    cout<<harta[i][j]<<" ";
                    }

                harta[robot3->getXC()][robot3->getYC()]='*';
                robot3->moveC(mapa);
                if(harta[robot3->getXC()][robot3->getYC()]==robot3->getItemC())
                 {
                   robot3->setXC(robot3->getXC()+3);
                   robot3->setYC(robot3->getYC()+3);
                   cout<<endl<<" Am dat peste item ";
                 }
                cout<<endl;
                harta[robot3->getXC()][robot3->getYC()]=robot3->getNumeC();
                // cout<<robot1.getXA()<<" "<<robot1.getYA()<<" "<<endl;
                }

        }
       else break;

    }
    if(robot3->getXC()==mapa.getLocatieX() && robot3->getYC()==mapa.getLocatieY()) cout<<" Joc terminat | robotul a ajuns la locatia finala ";

  }
}


