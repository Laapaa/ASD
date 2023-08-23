#include <iostream>
using namespace std;

struct agus {
	int NOKTP;
	string Nama[25];
	struct {
		string Jalan[20];
		string Kota[15];
		string KodePos[5];
	} Alamat;
	struct {
		string Tanggal[2];
		string Bulan[2];
		string Tahun[4];
	} Lahir;
};

int main() {
	agus *JatiDiri;
	JatiDiri = new agus;
	//input data
	cout<<"Masukan No KTP	= ";cin>>JatiDiri->NOKTP;
	cout<<"Masukan Nama 	= ";cin>>JatiDiri->Nama[25];
	cout<<"Alamat			"<<endl;
	cout<<" - Jalan		= ";cin>>JatiDiri->Alamat.Jalan[20];
	cout<<" - Kota			= ";cin>>JatiDiri->Alamat.Kota[15];
	cout<<" - Kode Pos 		= ";cin>>JatiDiri->Alamat.KodePos[5];
	cout<<"Tanggal Lahir	"<<endl;
	cout<<" - Tanggal		= ";cin>>JatiDiri->Lahir.Tanggal[2];
	cout<<" - Bulan		= ";cin>>JatiDiri->Lahir.Bulan[2];
	cout<<" - Tahun		= ";cin>>JatiDiri->Lahir.Tahun[2];
	cout<<endl;
	cout<<endl;

	cout<<"No KTP = "<<JatiDiri->NOKTP;cout<<endl;
	cout<<"Nama	= "<<JatiDiri->Nama[25];cout<<endl;
	cout<<"Alamat = "<<JatiDiri->Alamat.Jalan[20] <<JatiDiri->Alamat.Kota[15] <<JatiDiri->Alamat.KodePos[5]; cout<<endl;
	cout<<"Tanggal Lahir = "<<JatiDiri->Lahir.Tanggal[2] <<JatiDiri->Lahir.Bulan[2] <<JatiDiri->Lahir.Tahun[2] ;cout<<endl;
	cout<<endl;

	
}
