/*	Nama : Agus Wahyu Prasetyo
	NPM : 4521210064
	Praktek Algoritma Dan Struktur Data B*/

#include <iostream>	
#include <stdlib.h> // Library fungsi malloc
using namespace std;

void BUAT_SIMPUL(int X);
void AWAL();
void CETAK();
void INSERTKANAN();

struct Node {	// Deklarasi struktur simpul
	int INFO;
	Node *LINK;
};

typedef struct Node Simpul;
Simpul *P, *FIRST, *LAST, *Q;	// Menyiapkan pointer2 menunjuk ke simpul
int X;

int main(){
	cout << endl;
	int A[6];
	int I;
	for(I = 0; I <5; I++)
	{
		cout << " Masukkan isi nilai / elemen ke-" << I+1 << " : "; cin >> A[I];
		cout << endl;
	}
	FIRST = NULL;	// Inisialisasi linked list
	I = 0;
	X = A[I];
	BUAT_SIMPUL(X);
	AWAL();	// Menyiapkan simpul awal
	for(I =1 ; I < 5; I++)	// Menambahkan 8 simpul baru dan insert kanan agar terbentuk linked list
	{
		X = A[I];
		BUAT_SIMPUL(X);
		INSERTKANAN();
	}
	cout << " Nilai Sebelum Dilakukan Insert Kanan : ";  
	CETAK();
	X = 100;
	BUAT_SIMPUL(X);
	INSERTKANAN();	// Menginsert simpul baru di sebelah kanan dengan info = 999
	cout << endl;
	cout << " Nilai Setelah Dilakukan Insert Kanan : "; 
	CETAK();
	cout << endl;
cin.get();
}

void BUAT_SIMPUL(int X)
{
	P =(Simpul*) malloc(sizeof(Simpul));
	if(P != NULL)
	{	
		P -> INFO = X;
	}
	else 
	{
		cout << " Pembuatan Simpul Tidak Berhasil " <<endl;
		cin.get();
		exit(1);
	}
}

void AWAL()	// Fungsi membuat simpul awal
{
	FIRST = P;
	LAST = P;
	P -> LINK = NULL;
}

void INSERTKANAN()
{
	LAST -> LINK = P;
	LAST = P;
	P -> LINK = NULL;
}

void CETAK()
{
	int X;
	Q = FIRST;
	while(Q != NULL)
	{
		X = Q -> INFO;
		cout << " " << X;
		Q = Q -> LINK;
	}
}
