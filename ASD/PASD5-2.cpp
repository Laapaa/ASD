/*  Nama	: Agus Wahyu Prasetyo
	NIM 	: 4521210064
	Materi	: Bubble sort dan Shell sort */

#include <string.h>	
#include <iostream>
using namespace std;

class sugab
{
	public:
	int data[10], data2[10];
	int agus;
};

sugab gab;

void tukar(int a, int b)
{
	int t;
	t = gab.data[b];
	gab.data[b] = gab.data[a];
	gab.data[a] = t;
}

void input()
{
	cout << " Masukkan Jumlah Data = ";
	cin >> gab.agus;
	cout << "------------------------" << endl;
	for(int i = 0; i < gab.agus; i++)
	{
		cout << " Masukkan data ke-" << (i+1) << " = ";
		cin >> gab.data[i];
		gab.data2[i] = gab.data[i];
	}
	cout << endl;
}

void tampil()
{
	for(int i = 0; i < gab.agus; i++)
	{
		cout << gab.data[i] << " ";
	}
	cout << endl;
}

void bubble_sort()
{
	for(int i = 1; i < gab.agus; i++)
	{
		for(int j = gab.agus -1; j >= i; j--)
		{
			if(gab.data[j] < gab.data[j-1]) tukar(j, j-1);
		}
	tampil();	
	}
	cout << endl;
}

int main()
{
	cout << "*--------------------------------*" << endl;
	cout << "*   Selamat Datang di Aplikasi   *" << endl;
	cout << "*          Bubble Sort           *" << endl;
	cout << "*--------------------------------*" << endl;
	input();
	cout << " Proses bubble sort . . . " << endl;
	cout << "--------------------------" << endl;
	tampil();
	bubble_sort();
	cout << "--------------------------" << endl;
	cout << "       Terima Kasih       " << endl;
	cout << "--------------------------" << endl;
	cin.get();
}
