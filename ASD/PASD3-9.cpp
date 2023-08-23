/* Nama	: Agus Wahyu Prasetyo
   NPM	: 4521210064
   Kelas: Praktikum Algoritma dan Struktur Data B
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Agus	{
	public:
	string nama[20];
	string npm[20];
	float quiz[20];
	float uts[20];
	float uas[20];
	float na[20];
float index[20];	};

int a,b;  
void index(Agus *datamhs)
{
	if(datamhs->index[a] >= 0 && datamhs->index[a] <= 44.99)
		   cout<<setw(5)<<"E"<<setw(5)<<"|"<<endl;
	else
		if(datamhs->index[a] >= 45 && datamhs->index[a] <= 55.99)
			cout<<setw(5)<<"D"<<setw(5)<<"|"<<endl;
		else
			if(datamhs->index[a] >= 56 && datamhs->index[a] <= 59.99)
				cout<<setw(5)<<"C"<<setw(5)<<"|"<<endl;
			else
				if(datamhs->index[a] >= 60 && datamhs->index[a] <= 63.99)
					cout<<setw(5)<<"C+"<<setw(5)<<"|"<<endl;
				else
					if(datamhs->index[a] >= 64 && datamhs->index[a] <= 67.99)
						cout<<setw(5)<<"B-"<<setw(5)<<"|"<<endl;
					else
						if(datamhs->index[a] >= 68 && datamhs->index[a] <= 71.99)
							cout<<setw(5)<<"B"<<setw(5)<<"|"<<endl;
						else
							if(datamhs->index[a] >= 72 && datamhs->index[a] <= 75.99)
								cout<<setw(5)<<"B+"<<setw(5)<<"|"<<endl;
							else
								if(datamhs->index[a] >= 76 && datamhs->index[a] <= 79.99)
									cout<<setw(5)<<"A-"<<setw(5)<<"|"<<endl;
								else
									if(datamhs->index[a] >=80)
										cout<<setw(5)<<"A"<<setw(5)<<"|"<<endl;
   }
   
   int main()
   {
	   int jumlah;
	   Agus *datamhs;
	   datamhs = new Agus;
	   cout<<endl;
	   cout<<"INPUT DATA MAHASISWA"<<endl;
	   cout<<"Masukkan jumlah Mahasiswa : "; cin>>jumlah;
	   cout<<endl;
	   for(b=1; b<=jumlah; b++)
	   {
		   cout<<endl;
		   cout<<"Pengisian Data Mahasiswa ke-"<<b<<endl;
		   cout<<"NIM        : "; cin>>datamhs->npm[b];
		   cout<<"NAMA       : "; cin>>datamhs->nama[b];
		   cout<<"Nilai Quiz : "; cin>>datamhs->quiz[b];
		   cout<<"Nilai UTS  : "; cin>>datamhs->uts[b];
		   cout<<"Nilai UAS  : "; cin>>datamhs->uas[b];
	   }
	   cout<<endl;
	   cout<<"Data yang dimasukkan adalah : "<<endl;
	   cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	   cout<<"|"<<setw(10)<<"NIM"<<setw(10)<<"|"<<setw(10)<<"NAMA"<<setw(10)<<"|"<<setw(5)<<"QUIS"<<setw(5)<<"|"<<setw(5)<<"UTS"<<setw(5);
	   cout<<"|"<<setw(5)<<"UAS"<<setw(5)<<"|"<<setw(10)<<"N A"<<setw(10)<<"|"<<setw(5)<<"INDEX"<<setw(5)<<"|"<<endl;
	   cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	   for(b=1; b<=jumlah; b++)
	   {
		   for(a=b; a==b; a++)
		   {
			   datamhs->na[a] = (datamhs->quiz[a] + datamhs->uts[a] + datamhs->uas[a])/3;
			   cout<<"|"<<setw(10)<<datamhs->npm[a]<<setw(10)<<"|"<<setw(10)<<datamhs->nama[a]<<setw(10)<<"|";
			   cout<<setw(5)<<datamhs->quiz[a]<<setw(5)<<"|"<<setw(5)<<datamhs->uts[a]<<setw(5)<<"|"<<setw(5);
			   cout<<datamhs->uas[a]<<setw(5)<<"|"<<setw(10)<<datamhs->na[a]<<setw(10)<<"|";
			   datamhs->index[a] = datamhs->na[a];
			   index(datamhs);
		   }
	   }
	   cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
       cin.get();
   }	   
