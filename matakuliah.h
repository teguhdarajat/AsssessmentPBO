//deklarasi mnatakuliah.h

#include<iostream>
#include<string.h>
using namespace std;

class Matakuliah{
		//data member
		string kode;
		string nama;
		int sks;
		static int jumlah;
	public:
		Matakuliah();
		Matakuliah(string,string,int);
		~Matakuliah();
		//getter
		string getkode();
		string getnama();
		int getSKS();
		//setter
		void setkode(string);
		void setnama(string);
		void setSKS(int);
		//method
		void cetak();
		
		static void tambahJumlah();
};
