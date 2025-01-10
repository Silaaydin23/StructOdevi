#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include <conio.h>
#include <iomanip>


using namespace std;

enum Yakit
{
	B,D,G,H
};


struct Otomobil
{
	Yakit yakit;
	string marka;
	string model;
	int yil;
	float km;
	double fiyat;
};

void bilgiAl(Otomobil &arac);
void EkranaYaz(Otomobil &arac);

int main()
{
	setlocale(LC_ALL , "Turkish");

	Otomobil binek;
	Otomobil suv;
	Otomobil ticari;
	
	bilgiAl(binek);

	cout << endl;
	
	EkranaYaz(binek);
	
	cout << endl;
	
	bilgiAl(suv);

	cout << endl;
	
	EkranaYaz(suv);
	
	cout << endl;
	
	bilgiAl(ticari);

	cout << endl;
	
	EkranaYaz(ticari);
	
	cout << endl;
	
	system("pause");
	return 0;
}



	void bilgiAl(Otomobil &arac)
	{
		char yakit;
		bool kontrol;
		do
		{
		kontrol = false;
		cout << "Araç yakýtý giriniz(B,D,G,H) : ";
		yakit = getche();
		cout << endl;
		switch(yakit)
		{
			case 'B':
				arac.yakit = B;
				break;
			case 'D':
				arac.yakit = D;
				break;
			case 'G':
				arac.yakit = G;
				break;
			case 'H':
				arac.yakit = H;
				break;
			default:
				cout << "Geçersiz yakýt türü. Lütfen tekrar giriniz : " << endl;
				kontrol = true;
				break;
		}
		}
		while(kontrol);
		cout << "Otomobil markasýný giriniz : ";
		cin >> arac.marka;
		cin.ignore();
		cout << "Otomobil modelini giriniz : ";
		getline(cin ,arac.model);
		cout << "Otomobil yýlýný giriniz : ";
		cin >> arac.yil;
		cout << "Otomobil kilometresini giriniz : ";
		cin >> arac.km;
		cout << "Otomobil fiyatýný giriniz : ";
		cin >> arac.fiyat;
	}
	
	void EkranaYaz(Otomobil &arac)
	{
		string yakit;
		switch(arac.yakit)
		{
			case B: 
				yakit = "B";
				break;
			case D:
				yakit = "D";
				break;
			case G:
				yakit = "G";
				break;
			case H:
				yakit = "H";
				break;
		}
		cout << "Otomobil yakýtý : " << yakit << endl;
		cout << "Otomobil markasý : " << arac.marka << endl;
		cout << "Otomobil modeli : " << arac.model << endl;
		cout << "Otomobil yýlý : " << arac.yil << endl;
		cout << "Otomobil kilometresi : " << arac.km << endl;
		cout << "Otomobil fiyatý : " << arac.fiyat << endl;
	}
