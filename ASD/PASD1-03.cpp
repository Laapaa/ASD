//nama: Agus Wahyu Prasetyo
//NPM:4521210064
//PASD01-03

#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

struct Agus	{
		char nama[40], alamat[50], mbsim[20], pekerjaan[40], nosim[20];
	int tahun, tinggi;	};
	
void agus_sugus (Agus Wahyu);

int main (){
Agus Wahyu;

cout << endl;
agus_sugus (Wahyu);
cin.get();
}

void agus_sugus (Agus Wahyu){
	cout<<"ISI DATA DIRI UNTUK MENAMPILKAN SIM"<<endl;
	cout<<"NAMA				: ";cin.getline(Wahyu.nama,40);
	cout<<"ALAMAT				: ";cin.getline(Wahyu.alamat,50);
	cout<<"PEKERJAAN			: ";cin.getline(Wahyu.pekerjaan,40);
	cout<<"TAHUN LAHIR			: ";cin>>Wahyu.tahun;
	cout<<"TINGGI BADAN			: ";cin>>Wahyu.tinggi;
	cout<<"NOMOR SIM			: ";cin>>Wahyu.nosim;
	cout<<"MASA BERLAKU SIM		: ";cin>>Wahyu.mbsim;
	cout<<"SEDANG MEMPROSES DATA SIM ANDA..."<<endl;
	Sleep(2500);
	
	cout<<"=============================================================="<<endl;
	cout<<"==================== SURAT IZIN MENGEMUDI ===================="<<endl;
	cout<<"=============================================================="<<endl;
	cout<<"NAMA					: "<<Wahyu.nama<<endl;;
	cout<<"ALAMAT				: "<<Wahyu.alamat<<endl;
	cout<<"TAHUN LAHIR			: "<<Wahyu.tahun<<endl;
	cout<<"TINGGI BADAN			: "<<Wahyu.tinggi<<endl;
	cout<<"PEKERJAAN			: "<<Wahyu.pekerjaan<<endl;
	cout<<"NOMOR SIM			: "<<Wahyu.nosim<<endl;
	cout<<"SIM INI BERLAKU SAMPAI "<<Wahyu.mbsim<<endl;
	cout<<"=============================================================="<<endl;
}


