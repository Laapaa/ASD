/* 	Nama: Agus Wahyu Prasetyo
	NPM: 4521210064
	Mata Kuliah : Praktikum Algoritma Dan Struktur Data */

#include <iostream>
#include <string.h>
using namespace std;
#define MAX 100
#define true 1
#define false 0

typedef class biodata
{
	public:
	char nama[20];
	int usia;
} biodata;
class biodata mhs;
class biodata queue[MAX];
void init (void);
int full (void);
int empty (void);
class biodata entridata (void);
void enqueue (struct biodata mhs);
class biodata dequeue (void);
void display (struct biodata mhs);
void baca (void);
int awal, akhir;
char nocomment [10];

int main() {
 char pilih;
 cout << "== Program Entri Data Mahasiswa==\n";
 init();
 do {
	 cout << "MENU PILIHAN :\n";
	 cout << "1. Input Data\n";
	 cout << "2. Hapus Data\n";
	 cout << "3. Lihat Daftar Mahasiswa\n";
	 cout << "4. Hapus Semua Data\n";
	 cout << "5. Selesai.\n";
	 cout << "Pilih 1 sd 5 : ";
	 cin >> pilih;
	 switch (pilih) 
	 {
		 case '1' : mhs = entridata(); enqueue(mhs); break;
		 case '2' : cout << "\nData yang dihapus : \n";
				  mhs = dequeue (); display(mhs); break;
		 case '3' : baca (); break;
		 case '4' : init (); cout << "\nData telah dikosongkan\n";
		 case '5' : break;
		 default : cout << "Pilih sd 5!";
				break;			
	}
	 cout << "\n";
 }while (pilih != '5');
return 0;
}

void init (void) {
	awal = -1;
	akhir = -1;
}

void enqueue (struct biodata mhs)
{
	if (empty () == true) {
		awal = 0;
		akhir = 0;
		queue [awal] = mhs;
	}else if (full () != true) {
		akhir++;
		queue [akhir]=mhs;
	}else cout << "Queue sudah penuh... \n";
}

struct biodata dequeue (void)
{
	int i;
	if (empty () !=true) {
		mhs=queue[awal];
		for (i=awal; i<=akhir; i++)
			queue[i] = queue [i+1];
		akhir--;
		return(mhs);
	}else cout << "Queue kosong...\n";
}

int full (void)
{
	if (akhir == MAX-1) return(true);
	else return (false);
}

int empty (void)
{
	if (akhir == -1) return (true);
	else return (false);
}

void baca(void)
{
	int i;
	cout << "\nIsi Queue : \n";
	if (empty() !=true) {
		for (i=awal; i<=akhir; i++) {
			display(queue[i]);
		}
	}else cout << "Data kosong.";
	cout << "\n";
}

struct biodata entridata(void)
{
	struct biodata mhs;
	cout << "\n";
	cout << "Masukan Nama : ";cin >> mhs.nama;
	cout << "Masukan Usia : ";cin >> mhs.usia;
	return(mhs);
}

void display(struct biodata mhs)
{
	cout << "\n";
	cout << "Nama : " << mhs.nama << "\n";
	cout << "Usia : " << mhs.usia << "\n";
}
