#include<iostream>
using namespace std;

class agus
{
	public:
	int searchgab(int A[], int, int);
};

int main()
{
	agus pra;
	int wahyu;
	cout << "Masukkan jumlah data yang akan diinput : "; cin >> wahyu;
	
	int mat[wahyu];
	int tyo;
	for(tyo=0; tyo<wahyu; tyo++)
	{
		cout << "Masukkan data ke " << tyo+1 << " : "; cin >> mat[tyo];
	}
	cout << "==================================================" << endl;
	cout << " 		Sequential Search" << endl;
	cout << "==================================================" << endl;
	cout << "Isi data nya adalah " << endl;
	cout << endl;
	for(tyo=0; tyo<wahyu; tyo++)
	{
		cout << "\t" << "Data [" << tyo+1 << "]" << "==>" << mat[tyo] << endl;
	}
	int searchjan = 0;
	int jan=0;
	cout << endl;
	cout << "Masukkan data yang akan anda cari? "; cin >> searchjan;
	jan = pra.searchgab(mat, wahyu, searchjan);
	if(jan != -1)
		cout << "Data yang dicari ditemukan pada posisi : Data[" << jan+1 << "]" << endl;
	else
		cout << "Data yang anda cari tidak ditemukan" << endl;
	cin.get();
	return 0;
}

int agus :: searchgab(int mat[], int wahyu, int gab)
{
	int jan = -1;
	for(int tyo=0; tyo<wahyu; tyo++)
	{
		if(gab==mat[tyo])
		{
			jan=tyo;
			break;
		}
	}
	return jan;
}
	
