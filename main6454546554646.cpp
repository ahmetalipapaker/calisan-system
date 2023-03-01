#include <bits/stdc++.h>

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


calisan emp[max], tempemp[max],
	sortemp[max], sortemp1[max];

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



void olustur()
{
	cout << "Maksimum Kayit Sayisi  "
		<< max << "\n";

	cout << "Kac kisi kaydetmek istiyorsunuz?: ";
	cin >> numara;

	if (numara > 20) {
		cout << "En fazla 20 kisi"
			<< "Kaydedebilirsiniz.\n";
		numara = 20;
	}
	cout << "Maksimum 20 kisi eklenecektir.\n";

	for (int i = 0; i < numara; i++) {
		cout << "Ad: ";
		cin >> emp[i].ad; 
		
		cout<< "Soyad:";
		cin>> emp[i].soyad;

		cout << "ID numarasi: ";
		cin >> emp[i].id;

        cout << "Yas: ";
		cin >> emp[i].yas;

	    cout << "Ýzin Gunu: ";
		cin >> emp[i].izin;

		cout << "Calýsma Saati: ";
		cin >> emp[i].calismasaati;


        
        cout<<"Kayit Basarili...\n";

		
	}

	showMenu();
}


void verigiris()
{
	if (numara < max) {
		int i = numara;
		numara++;

		cout << "Lutfen Bilgileri "
			<< "Eksiksiz Doldurunuz\n";
		cout << "Ad: ";
		cin >> emp[i].ad; 
		
		cout<< "Soyad:";
		cin>> emp[i].soyad;

		cout << "Id Numarasi: ";
		cin >> emp[i].id;

	    cout << "Yas: ";
		cin >> emp[i].yas;
		
		cout << "Ýzin Gunu: ";
		cin >> emp[i].izin;

		cout << "Calýsma Saati: ";
		cin >> emp[i].calismasaati; 
		
		
        cout<<"---Bilgiler Sisteme Basariyla Kaydedilmistir...---";
   
	
	}
	else {
		cout << "Tablo Tamamen Dolu\n";
	}

	showMenu();
}


void verisil(int i)
{
	for (int j = i; j < numara - 1; j++) {
		emp[j].ad = emp[j + 1].ad;
		emp[j].soyad=emp[j+1].soyad;
		emp[j].id = emp[j + 1].id;
		emp[j].izin= emp[j + 1].izin;
		emp[j].calismasaati = emp[j + 1].calismasaati;
		emp[j].yas = emp[j + 1].yas; 
		
	}
	return;
}


void verisil()
{
	cout << "Kayýt Silmek Ýcin "
		<< "Id Numarasi Giriniz:";

	int id;

	cin >> id;
	for (int i = 0; i < numara; i++) {
		if (emp[i].id == id) {
			verisil(i);
			numara--; 
			
		cout<<"Kisi Silindi...";
		}		
		else{
		    cout<<"Kisi Bulunamadi...";
		    
		    
		    break;
		}
	    
		
	}
	showMenu();
}

void veriara()
{
	cout << "Kayit Arama Ýcin"
		<< " Id Numarasi Giriniz:";

	int id;
	cin >> id;

	for (int i = 0; i < numara; i++) {

		
		if (emp[i].id == id) {
			
			cout<<"---Aranan Kisinin Bilgileri---\n";
			
		    cout << "Ad: "
				<< emp[i].ad << "\n"; 
				
			cout<<"Soyad:"
			    << emp[i].soyad<<"\n";

			cout << "ID Numarasi: "
				 << emp[i].id << "\n";

			cout << "Yas:"
			     << emp[i].yas << "\n";
			
		    cout << "Ýzin Gunu:"
				 << emp[i].izin << "\n";

			cout << "Calisma Saati: "
				 << emp[i].calismasaati << "\n"; 
				
		
			     
	}	
		
		else{
		    cout<<"Kisi Bulunamadi...";
		    
		     break;  
		}
    }

	showMenu();
}


void showMenu()
{

	cout <<"\n---Hosgeldiniz---\n\n";

	
	cout << "Coklu Kayit Olustur	    (1)\n";
	cout << "Yeni Kayit Olustur          (2)\n";
	cout << "Kayit Sil	            (3)\n";
	cout << "Kayit Arama	            (4)\n";
	cout << "Cikis			    (5)\n"; 
	cout << "Lutfen Secim Yapiniz: ";

	int secenek;


	cin >> secenek;

	
	if (secenek == 1) {
		olustur();
	}
	else if (secenek == 2) {
		verigiris();
	}
	else if (secenek == 3) {
		verisil();
	}
	else if (secenek== 4) {
		veriara();
	}
	else if (secenek== 5) {
		cout<<"Kolay Gelsin...";
		return;
	}
	else {
		cout << "Gecerli Bir Secim Yapiniz"
			<< "  1/2/3/4/5"; 
			
		showMenu();
	}
}



int main()
{

	showMenu();
	return 0;
}
