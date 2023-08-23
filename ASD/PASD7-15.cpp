#include <string.h>
#include<iostream>
using namespace std;
#define MAXSIZE 30

class agus{
	public:
	void fibonacci(int *ag);
	int fibonacci_search(int *us, int pra, int set);
};

void agus :: fibonacci(int *ag)
{
	ag[0] = 1;
	ag[1] = 1;
	for(int gab=2; gab<MAXSIZE; gab++)
		ag[gab] = ag[gab-2] + ag[gab-1];
}

int agus :: fibonacci_search(int *by, int wah, int mat)
{
	int lala =0, jan = mat-1;
	int agus = 0;
	int wahyu = 0;
	int F[MAXSIZE];
	fibonacci(F);
	while(mat > F[wahyu]-1)
		++wahyu;
	for(int gab = mat; gab < F[wahyu]-1; gab++)
		by[gab] = by[jan];
	while(lala <= jan)
	{
		agus = lala + F[wahyu-1]-1;
		if(by[agus] > wah)
		{
			jan = agus-1;
			wahyu = wahyu-1;
		}else if(by[agus] < wah)
		{
			lala = agus + 1;
			wahyu = wahyu-2;
		}else{
			if(agus <= jan)
				return agus;
			else
				return -1;
		}
	}
	return -1;
}

int main()
{
	agus gab;
	int us[MAXSIZE];
	int a;
	cout << "Masukkan jumlah data yang akan diinput : "; cin >> a;
	
	for(int d=0; d<a; d++)
	{
		cout << "Masukkan data ke " << d+1 << " : "; cin >> us[d];
	}
	int wahyu;
	cout << "Masukkan angka yang akan dicari : ";cin >> wahyu;
	int pos = gab.fibonacci_search(us,wahyu,a);
	if(pos != -1)
		cout << "Data ditemukan pada posisi : " << pos+1 << " Isi Elemennya = " << wahyu << endl;
	else
		cout << "Data tidak ditemukan " << endl;
	cin.get();
	return 0;
}
