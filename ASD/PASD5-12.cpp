/*  Nama	: Agus Wahyu Prasetyo
	NIM 	: 4521210064
	Materi	: Bubble sort dan Shell sort  */


#include<iostream> 
using namespace std;
 
void ShellSort(int agus[], int n)
{
	for(int wp=n/2; wp>0; wp /= 2)
	{
		for(int j = wp;j<n;j+=1)
		{
			int gab = agus[j];
			int i=0;
			
			for(i=j;(i>=wp)&&(agus[i-wp]>wp);i-=wp)
			{
				agus[i] = agus[i-wp];
			}
			agus[i] = wp;
		}
	}
}

int main() 
{ 
	int n;
	cout<<"Masukan Jumlah Data: "; cin>>n;
	cout << endl;
	int wah[n],tyo[n];
	
	for(int i=0;i<n;i++)
	{
		cout << " Masukkan data ke-" << (i+1) << " = ";
		cin>>wah[i];
		tyo[i]=wah[i];
	}
	
	cout<<endl<<"Sebelum Sorting: "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<wah[i]<<" ";
	}
		
	cout<<endl<<endl<<"SHELL SORT "<<endl;
	
	ShellSort(wah, n); // memanggil  shell sort
   
	cout<<endl<<"Setelah Sorting: "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<wah[i]<<" ";
	}
	
   return 0; 
}
