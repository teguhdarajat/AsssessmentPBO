#include "Point.h"
#include "Prodi.h"

int main(){
	string namaProdi, kodeMatkul, namaMatkul;
	int jumlahProdi, pilihan, SKS;
	bool keluar = false;
	Matakuliah matkul;
	
	cout << "Input Nama Prodi : ";
	cin >> namaProdi;
	cout << "Input Jumlah Prodi : ";
	cin >> jumlahProdi;
	Prodi TRM (namaProdi, jumlahProdi);
	int i = 0;
	
	while (!keluar) {
		cout << "MENU\n";
		cout << "1. Print semua MK\n";
		cout << "2. Tambah MK\n";
		cout << "3. Cari MK\n";
		cout << "4. Reset MK\n";
		cout << "5. Hapus MK\n";
		cout << "6. Keluar\n";
		cout << "Input Pilihan Anda : ";
		cin >> pilihan;
		
		switch (pilihan) {
			case 1 : TRM.cetakMatkul(); break;
			case 2 : 
				if (i < jumlahProdi){
					cout << "Input Kode MK : ";
					cin >> kodeMatkul;
					cout << "Input nama MK : ";
					cin >> namaMatkul;
					cout << "Input jumlah SKS MK : ";
					cin >> SKS;
					matkul.setkode(kodeMatkul);
					matkul.setnama(namaMatkul);
					matkul.setSKS(SKS);
					TRM.tambahMatkul(matkul);
					i++;
				}
				else {
					cout << "Jumlah Prodi telah penuh\n";
				}
				break;
			case 3: 
				cout << "Input Kode MK : ";
				cin >> kodeMatkul;
				TRM.cariMatkul(kodeMatkul);
				break;
			case 4: 
				TRM.resetMK(jumlahProdi);
				break;
			case 5:
				cout << "Input Kode MK : ";
				cin >> kodeMatkul;
				TRM.hapusMatkul(kodeMatkul, matkul);
				break;
			case 6: 
				keluar = true;
			break;

		}
	
	}

	return 0;
}
