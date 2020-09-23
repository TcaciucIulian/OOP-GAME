#include <iostream>
#include "clase.h"
#include "robot.h"

using namespace std;

int main()
{
 int n,m;
 cout<<" Numar linii ";
 cin>>n;
 cout<<endl<<" Numar coloane ";
 cin>>m;

 Game harta(n,m); // apelare constructor;

 int alegere=0;
 harta.initializareHarta(harta,harta.getHarta(),alegere); // initializare harta ;
 harta.joculet(harta,harta.getHarta(),alegere); // desfasurarea jocului;

}
