#include <cstdlib>
#include <iostream>
#include<conio.h>
using namespace std;
struct Node{
	int angka;
	float desimal;
	char kata[50];
	struct Node *LINK;
};

Node *P,*FIRST,*LAST;
int cake;

void case1(){
	int milih;
	cout<<"       Inputan string atau integer"<<endl;
	cout<<"-----------------------------------------"<<endl;
	cout<<"  1. string"<<endl;
	cout<<"  2. integer"<<endl;
	cout<<endl;
	cout<<"  Silakan masukkan pilihan Anda : ";cin>>milih;
	cout<<"=========================================="<<endl;
	if (milih==1){
		cout<<"  Masukkan sebuah kata : ";cin>>P->kata;
		cout<<"  Kata yang Anda masukkan adalah ["<<P->kata<<"]"<<endl;
	}
	if(milih==2){
		cout<<"  Masukkan sebuah angka : ";cin>>P->angka;
		cout<<"  Angka yang Anda masukkan adalah ["<<P->angka<<"]"<<endl;
	}
}
		
void case2(){
	int milih;
	cout<<"       Inputan string atau float"<<endl;
	cout<<"-----------------------------------------"<<endl;
	cout<<"  1. string"<<endl;
	cout<<"  2. float"<<endl;
	cout<<endl;
	cout<<"  Silakan masukkan pilihan Anda : ";cin>>milih;
	cout<<"=========================================="<<endl;
	if (milih==1){
		cout<<"  Masukkan sebuah kata : ";cin>>P->kata;
		cout<<"  Kata yang Anda masukkan adalah ["<<P->kata<<"]"<<endl;
		
	}
	if(milih==2){
		cout<<"  Masukkan sebuah angka : ";cin>>P->desimal;
		cout<<"  Angka yang Anda masukkan adalah ["<<P->desimal<<"]"<<endl;
	}
}
	
void BUAT_SIMPUL(void){
	P=(Node*) malloc(sizeof(Node));
	if(P!=NULL){
	   switch(cake)
	   {
		   case 1:
				case1();
				break;
		   case 2:
				case2();
				break;
		   default:
				cout<<"  Pilihan tidak tersedia"<<endl;
				break;
	   }
	}
	else{
        cout<<"Pembuatan Simpul Gagal"<<endl;
		getch();
		exit(1);
   }
}

void INIT(void)
{
	FIRST=NULL;
	LAST=NULL;
}
void AWAL(void)
{
   FIRST=P;
   LAST=P;
   P->LINK=NULL;
}
void INSERT_KANAN(void)
{
   LAST->LINK=P;
   LAST=P;
   P->LINK=NULL;
}
void INSERT(void)
{
   BUAT_SIMPUL();
   if(FIRST==NULL)
	   AWAL();
   else
	   INSERT_KANAN();
}

int main()
{
	INIT();
	cout<<endl;
	cout<<"=========================================="<<endl;
    cout<<"                  MENU "<<endl;
	cout<<"=========================================="<<endl;
	cout<<"  1. Untuk inputan string atau integer"<<endl;
	cout<<"  2. Untuk inputan string atau float"<<endl;
	cout<<endl;
	cout<<"  Silakan masukkan pilihan Anda : ";cin>>cake;
	cout<<"=========================================="<<endl;
	INSERT();
	cin.get();
}
