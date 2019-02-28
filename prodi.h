#include<iostream>
#include<string.h>
#include"matakuliah.h"
using namespace std;

class Prodi{
	string nama;
	Matakuliah* matkul;
	int jumlahMatkul;
	
	public:
		Prodi();
		Prodi(string,int);
		~Prodi();
		string getnama();
		int getJumlahMK();
		void setnama(string);
		//void resetMK(int);
		void cetakMatkul();
		void tambahMatkul(Matakuliah mk);
		void cariMatkul(string);
		void cariMatkul(int);
		void resetMK(int);
		void hapusMatkul(string, Matakuliah&);
		
};
