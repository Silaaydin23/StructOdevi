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
		cout << i << ". gönderi için: " << endl;
		cout << "Gönderen ad soyad bilgisini giriniz : ";
		getline(cin,gonderen.adi_soyadi);
		cout << "Gönderen adresi bilgisini giriniz : ";
		getline(cin,gonderen.adresi);
		cout << "Gönderen telefon numarasý bilgisini giriniz : ";
		getline(cin,gonderen.telefon_no);
				
		cout << endl;
		
		cout << "Alýcý ad soyad bilgisini giriniz : ";
		getline(cin,alici.adi_soyadi);
		cout << "Alýcý adresi bilgisini giriniz : ";
		getline(cin,alici.adresi);
		cout << "Alýcý telefon numarasý bilgisini giriniz : ";
		getline(cin,alici.telefon_no);
		
		cout << endl;
		
		cout << "Gönderi numarasýný giriniz : ";
		cin >> gonderi.gonderi_no;
		cout << "Gönderi aðýrlýðýný giriniz : ";
		cin >> gonderi.agirlik;
		cout << "Gönderi hacmini giriniz : ";
		cin >> gonderi.hacim;
		cout << "Gönderi için garanti bilgisini (e/h) olarak giriniz : ";
		cin >> gonderi.garanti;
		cout << "Gönderi ücretini giriniz : ";
		cin >> gonderi.ucret;
		cin.ignore();
		
		cout << endl;
		
		cout << "Kurye ad soyad bilgisini giriniz : ";
		getline(cin,kurye.adi_soyadi);
		cout << "Kurye telefon numarasý bilgisini giriniz : ";
		getline(cin,kurye.telefon_no);
		
		cout << endl;
		cout << endl;
		system("cls");
		
		
		cout << "Gönderen ad soyadý : " << gonderen.adi_soyadi << endl;
		cout << "Gönderen adresi : " << gonderen.adresi << endl;
		cout << "Gönderen telefon numarasý : " << gonderen.telefon_no << endl;
		
		cout << endl;
		
		cout << "Alýcý ad soyadý : " << alici.adi_soyadi <<  endl;
		cout << "Alýcý adresi : " << alici.adresi << endl;
		cout << "Alýcý telefon numarasý : " << alici.telefon_no << endl;
		
		cout << endl;
		
		cout << "Gönderi numarasý : " << gonderi.gonderi_no << endl;
		cout << "Gönderi aðýrlýðý : " << gonderi.agirlik << endl;
		cout << "Gönderi hacmi : " << gonderi.hacim << endl;
		cout << "Gönderi garanti bilgisi : " << gonderi.garanti << endl;
		cout << "Gönderi ücreti : " << gonderi.ucret << endl;
		
		cout << endl;
		
		cout << "Kurye ad soyadý : " << kurye.adi_soyadi << endl;
		cout << "Kurye telefon numarasý : " << kurye.telefon_no << endl;
		cout << endl;
	}

	
	system("pause");
	return 0;
}
