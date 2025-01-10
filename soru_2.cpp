#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <fstream>

using namespace std;

struct Kumas
{
	string ipliktipi;
	float dm2agirlik;
	string dokumatipi;
	string renk;
	float miktar;
};

struct iskelet
{
	string malzeme;
	string birlestirme;
	string tarz;
	float boyut;
	float miktar;	
};

struct Mobilya
{
	Kumas kaplama;
	iskelet malzeme;
	int adet;
	int fiyat;
};

int main()
{
	setlocale(LC_ALL , "Turkish");
	
	Mobilya mobilya;
	int toplam = 0;
	
	
	for(int i=1; i<= 10; i++)
	{
		cout << i << ". ürün için : " <<endl;
		cout << "Ýplik tipiniz : ";
		cin >> mobilya.kaplama.ipliktipi;
		cout << "dm2 aðýrlýk giriniz : ";
		cin >> mobilya.kaplama.dm2agirlik;
		cout << "Dokuma tipini giriniz : ";
		cin >> mobilya.kaplama.dokumatipi;
		cout << "Rengi giriniz : ";
		cin >> mobilya.kaplama.renk;
		cout << "Miktarý giriniz : ";
		cin >> mobilya.kaplama.miktar;
		cin.ignore();
		
		cout << "Malzemeyi giriniz : ";
		getline(cin,mobilya.malzeme.malzeme);
		cout << "Birleþtirmeyi giriniz : ";
		getline(cin,mobilya.malzeme.birlestirme);
		cout << "Tarzý giriniz : ";
		getline(cin,mobilya.malzeme.tarz);
		cout << "Boyutu giriniz : ";
		cin >> mobilya.malzeme.boyut;
		cout << "Miktarý giriniz : ";
		cin >> mobilya.malzeme.miktar;
		cout << "Adedi giriniz : ";
		cin >> mobilya.adet;
		cout << "Fiyat bilgisi giriniz : " ;
		cin >> mobilya.fiyat;
		cout << endl;
	
		cout << "Ýplik tipi : " << mobilya.kaplama.ipliktipi << endl;
		cout << "dm2 aðýrlýk : " << mobilya.kaplama.dm2agirlik << endl;
		cout << "Dokuma tipi : " << mobilya.kaplama.dokumatipi << endl;
		cout << "Renk : " <<  mobilya.kaplama.renk << endl;
		cout << "Miktar : " << mobilya.kaplama.miktar << endl;
		
		cout << "Malzeme : " <<  mobilya.malzeme.malzeme << endl;
		cout << "Birleþtirme : " <<  mobilya.malzeme.birlestirme << endl;
		cout << "Tarz : " << mobilya.malzeme.tarz << endl;
		cout << "Boyut : " << mobilya.malzeme.boyut << endl;
		cout << "Miktar : " << mobilya.malzeme.miktar << endl;
		cout << "Adet : " << mobilya.adet << endl;
		cout << "fiyat : " << mobilya.fiyat << endl;
		toplam += mobilya.fiyat;
		cout << endl;
	}
	cout << "Toplam fiyat : " << toplam << endl;
	
	system("pause");
	return 0;
}
