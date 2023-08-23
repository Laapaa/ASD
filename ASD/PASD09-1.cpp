#include <iostream>
using namespace std;
#define wahyu 10
int main ()
{
	int agus;
	int lapa[wahyu] = {4,7,10,11,16,22,24,28,63,66};
	int la, pa, wah, yu, prasetyo;
	cout << " Daftar Nilai / Angka " << endl;
	for (la=0; la<=wahyu-1; la++)
	{
		cout << " " << lapa[la] << endl;
	}
	cout << " Masukkan Data yang Dicari : "; cin >> agus;
	pa=0, wah=wahyu-1; prasetyo=0;
	while (pa <= wah && prasetyo==0)
	{
		yu=(pa+wah)/2;
		if (agus==lapa[yu])
			prasetyo=1;
		else
			if(agus<lapa[yu])
				wah=yu-1;
			else
				pa=yu+1;
	}
	if (prasetyo==1)
		cout << " Nilai " << agus << " Ditemukan pada baris ke " << (yu+1) << endl;
	else
		cout << " Nilai tidak ditemukan " << endl;
	cin.get();
}
