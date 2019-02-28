#include"prodi.h"


Prodi::Prodi(){
	nama="-";
	jumlahMatkul=1;
	matkul=new Matakuliah[1];
}

Prodi::Prodi(string n,int j){
	nama=n;
	jumlahMatkul=0;
	matkul=new Matakuliah[j];
}

Prodi::~Prodi(){
	delete [] matkul;
	cout<<"prodi "<<nama<<" didestruct"<<endl;
}

string Prodi::getnama(){
	return nama;
}

int Prodi::getJumlahMK(){
	return jumlahMatkul;
}

void Prodi::setnama(string n){
	nama=n;	
}

void Prodi::cetakMatkul(){
	cout<<"Daftar MK untuk prodi "<<nama<<": "<<endl;\
	for (int i=0;i<jumlahMatkul;i++){
		cout<<i+1<<". "<<matkul[i].getnama()<<endl;
	}
	cout<<endl;
}

void Prodi::tambahMatkul(Matakuliah mk){
	matkul[jumlahMatkul].setkode(mk.getkode());
	matkul[jumlahMatkul].setnama(mk.getnama());
	matkul[jumlahMatkul].setSKS(mk.getSKS());
	jumlahMatkul++;
}

void Prodi::cariMatkul(string _kode) {
	bool found = false;
	int i = 0;
	while(!found && i < jumlahMatkul) {
		if (matkul[i].getkode() == _kode) {
			found = true;
			cout << "MK ditemukan" << endl;
			matkul[i].cetak();
		}
		i++;
	}
	if (!found){
		cout << "MK tidak ditemukan\n";
	}
}

void Prodi::cariMatkul(int _sks) {
	for (int i = 0; i < jumlahMatkul; i++) {
		if (matkul[i].getSKS() == _sks){
			matkul[i].cetak();
		}
	}
}

//Reset MK di Prodi
void Prodi::resetMK(int jum) {
	delete [] matkul;
	jumlahMatkul = 0;
	matkul = new Matakuliah[jum];
	cout << "MK di Prodi " << nama << " telah direset" << endl; 
}

//	Hapus Satu Matkul
void Prodi::hapusMatkul(string kodemk, Matakuliah &mk) {
	bool found = false;
	int i = 0;
	while(!found && i < jumlahMatkul) {
		if (matkul[i].getkode() == kodemk) {
			found = true;
		}
		else {
			i++;
		}
	}
	
	if (!found){
		cout << "MK tidak ditemukan\n";
	}
	
	else {
		mk.setkode(matkul[i].getkode());
		mk.setnama(matkul[i].getnama());
		mk.setSKS(matkul[i].getSKS());
		jumlahMatkul--;	
		matkul[i].setkode(matkul[jumlahMatkul].getkode());
		matkul[i].setnama(matkul[jumlahMatkul].getnama());
		matkul[i].setSKS(matkul[jumlahMatkul].getSKS());
		
		cout << "Mata kuliah " << kodemk << " telah dihapus" << endl;
	}
	
}
