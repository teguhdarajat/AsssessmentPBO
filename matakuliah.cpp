#include "matakuliah.h"

Matakuliah::Matakuliah(){
	kode = "-";
	nama = "-";
	sks = 0;
}
Matakuliah::Matakuliah(string k,string n,int s){
	kode = k;
	nama = n;
	sks = s;
}
Matakuliah::~Matakuliah(){
	cout<<"object mk "<<kode<<" didestruct"<<endl;
}
string Matakuliah::getkode(){
	return kode;
}

string Matakuliah::getnama(){
	return nama;
}

int Matakuliah::getSKS(){
	return sks;
}

void Matakuliah::setkode(string k){
	kode = k;
}

void Matakuliah::setnama(string n){
	nama = n;
}

void Matakuliah::setSKS(int x){
	sks = x;
}

void Matakuliah::cetak(){
	cout<<"info untuk MK "<<kode<<":"<<endl;
	cout<<"nama MK "<<nama<<endl;
	cout<<"sks: "<<sks<<endl<<endl;
}

int Matakuliah::jumlah = 0;

void Matakuliah::tambahJumlah() {
	jumlah++;
	cout << "Nillai setelah ditambah : " << jumlah << endl;
}
