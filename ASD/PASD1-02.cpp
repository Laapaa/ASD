//NAMA: Agus wahyu prasetyo
//NPM:4521210064
//PRAK ASD KELAS B


#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	struct agus	{
		char nama[40], alamat[50], mbsim[20], pekerjaan[40], nosim[20];
	int tahun, tinggi;	};
	
	agus data;
	cout<<"ISI DATA DIRI UNTUK MENAMPILKAN SIM"<<endl;
	cout<<"NAMA				: ";cin.getline(data.nama,40);
	cout<<"ALAMAT				: ";cin.getline(data.alamat,50);
	cout<<"PEKERJAAN			: ";cin.getline(data.pekerjaan,40);
	cout<<"TAHUN LAHIR			: ";cin>>data.tahun;
	cout<<"TINGGI BADAN			: ";cin>>data.tinggi;
	cout<<"NOMOR SIM			: ";cin>>data.nosim;
	cout<<"MASA BERLAKU SIM		: ";cin>>data.mbsim;
	cout<<"SEDANG MEMPROSES DATA SIM ANDA..."<<endl;
	Sleep(2500);
	
	cout<<"=============================================================="<<endl;
	cout<<"==================== SURAT IZIN MENGEMUDI ===================="<<endl;
	cout<<"=============================================================="<<endl;
	cout<<"NAMA					: "<<data.nama<<endl;;
	cout<<"ALAMAT				: "<<data.alamat<<endl;
	cout<<"TAHUN LAHIR			: "<<data.tahun<<endl;
	cout<<"TINGGI BADAN			: "<<data.tinggi<<endl;
	cout<<"PEKERJAAN			: "<<data.pekerjaan<<endl;
	cout<<"NOMOR SIM			: "<<data.nosim<<endl;
	cout<<"SIM INI BERLAKU SAMPAI "<<data.mbsim<<endl;
	cout<<"=============================================================="<<endl;
	
	return 0;
}
