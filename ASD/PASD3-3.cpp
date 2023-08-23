#include <iostream>
#include <conio.h>
using namespace std;
typedef int mutu;
int main ()
{
	mutu nilai;
	cout << "Masukan Nilai Mahasiswa = ";cin >> nilai;
	
	//untuk nilai 0-50
	if((nilai>=0)&&(nilai<=50)) {
		cout << "E = Gagal" << endl;
	}
	//untuk nilai 51-60
	if((nilai>=51)&&(nilai<=60)) {
		cout << "D = Kurang" << endl;
	}
	//untuk nilai 61-70
	if((nilai>=61)&&(nilai<=70)) {
		cout << "C = Cukup" << endl;
	}
	//untuk nilai 71-80
	if((nilai>=71)&&(nilai<=80)) {
		cout << "B = Baik" << endl;
	}
	//untuk nilai 81-100
	if((nilai>=81)&&(nilai<=100)) {
		cout << "A = Sangat Baik" << endl;
	}
	getch;
	return 0;
}
