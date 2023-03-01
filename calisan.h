#ifndef CALISAN_H
#define CALISAN_H
#include <iostream>

#define max 20
using namespace std;


class calisan           {
	public:
	string ad;
	long int id;
	string izin;
	int calismasaati;
	int yas; 
	string soyad;
                         }; 

int numara;
void showMenu();


class mesai:public calisan
{

 public:
 
 int calismasaati;
 virtual void veriara();
 virtual void olustur();
 virtual void verisil();
 virtual void verigiris();
 virtual void showMenu();

    
    
};
#endif
