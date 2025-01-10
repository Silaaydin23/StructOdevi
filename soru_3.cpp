#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <fstream>

using namespace std;

struct Gonderen
{
	string adi_soyadi;
	string adresi;
	string telefon_no;
};

struct Alici
{
	string adi_soyadi;	
	string adresi;
	string telefon_no;
};

struct Gonderi
{
	string gonderi_no;
	float agirlik;
	float hacim;
	char garanti;
	float ucret;
};

struct Kurye
{
	string adi_soyadi;
	string telefon_no;
};

int main()
{
	setlocale(LC_ALL , "Turkish");
	
	Gonderen gonderen;
	Alici alici;
	Gonderi gonderi;
	Kurye kurye;
		
	for(int i=1; i<=5; i++)
	{
		cout << i << ". g�nderi i�in: " << endl;
		cout << "G�nderen ad soyad bilgisini giriniz : ";
		getline(cin,gonderen.adi_soyadi);
		cout << "G�nderen adresi bilgisini giriniz : ";
		getline(cin,gonderen.adresi);
		cout << "G�nderen telefon numaras� bilgisini giriniz : ";
		getline(cin,gonderen.telefon_no);
				
		cout << endl;
		
		cout << "Al�c� ad soyad bilgisini giriniz : ";
		getline(cin,alici.adi_soyadi);
		cout << "Al�c� adresi bilgisini giriniz : ";
		getline(cin,alici.adresi);
		cout << "Al�c� telefon numaras� bilgisini giriniz : ";
		getline(cin,alici.telefon_no);
		
		cout << endl;
		
		cout << "G�nderi numaras�n� giriniz : ";
		cin >> gonderi.gonderi_no;
		cout << "G�nderi a��rl���n� giriniz : ";
		cin >> gonderi.agirlik;
		cout << "G�nderi hacmini giriniz : ";
		cin >> gonderi.hacim;
		cout << "G�nderi i�in garanti bilgisini (e/h) olarak giriniz : ";
		cin >> gonderi.garanti;
		cout << "G�nderi �cretini giriniz : ";
		cin >> gonderi.ucret;
		cin.ignore();
		
		cout << endl;
		
		cout << "Kurye ad soyad bilgisini giriniz : ";
		getline(cin,kurye.adi_soyadi);
		cout << "Kurye telefon numaras� bilgisini giriniz : ";
		getline(cin,kurye.telefon_no);
		
		cout << endl;
		cout << endl;
		system("cls");
		
		
		cout << "G�nderen ad soyad� : " << gonderen.adi_soyadi << endl;
		cout << "G�nderen adresi : " << gonderen.adresi << endl;
		cout << "G�nderen telefon numaras� : " << gonderen.telefon_no << endl;
		
		cout << endl;
		
		cout << "Al�c� ad soyad� : " << alici.adi_soyadi <<  endl;
		cout << "Al�c� adresi : " << alici.adresi << endl;
		cout << "Al�c� telefon numaras� : " << alici.telefon_no << endl;
		
		cout << endl;
		
		cout << "G�nderi numaras� : " << gonderi.gonderi_no << endl;
		cout << "G�nderi a��rl��� : " << gonderi.agirlik << endl;
		cout << "G�nderi hacmi : " << gonderi.hacim << endl;
		cout << "G�nderi garanti bilgisi : " << gonderi.garanti << endl;
		cout << "G�nderi �creti : " << gonderi.ucret << endl;
		
		cout << endl;
		
		cout << "Kurye ad soyad� : " << kurye.adi_soyadi << endl;
		cout << "Kurye telefon numaras� : " << kurye.telefon_no << endl;
		cout << endl;
	}

	
	system("pause");
	return 0;
}
