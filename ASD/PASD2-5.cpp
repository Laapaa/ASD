#include <iostream>
   #include <string>
   #include <iomanip>
   using namespace std;
   
   struct agus
   {
	   string ag[20];
	   string us[20];
	   float wah[20];
	   float yu[20];
	   float wahyu[20];
	   float WP[20];
	   float index[10];
   };
   
   int pra, tyo;
   
   void index(agus Datamhs)
   {
	   if(Datamhs.index[pra] >= 0 && Datamhs.index[pra] <= 44.99)
		   cout<<setw(5)<<"E"<<setw(5)<<"|"<<endl;
	   else
		   if(Datamhs.index[pra] >= 45 && Datamhs.index[pra] <= 55.99)
			   cout<<setw(5)<<"D"<<setw(5)<<"|"<<endl;
		   else
			   if(Datamhs.index[pra] >= 56 && Datamhs.index[pra] <= 59.99)
				   cout<<setw(5)<<"C"<<setw(5)<<"|"<<endl;
			   else
				   if(Datamhs.index[pra] >= 60 && Datamhs.index[pra] <= 63.99)
					   cout<<setw(5)<<"C+"<<setw(5)<<"|"<<endl;
				   else
					   if(Datamhs.index[pra] >= 64 && Datamhs.index[pra] <= 67.99)
						   cout<<setw(5)<<"B-"<<setw(5)<<"|"<<endl;
					   else
						   if(Datamhs.index[pra] >= 68 && Datamhs.index[pra] <= 71.99)
							   cout<<setw(5)<<"B"<<setw(5)<<"|"<<endl;
						   else
							   if(Datamhs.index[pra] >= 72 && Datamhs.index[pra] <= 75.99)
								   cout<<setw(5)<<"B+"<<setw(5)<<"|"<<endl;
							   else
								   if(Datamhs.index[pra] >= 76 && Datamhs.index[pra] <= 79.99)
									   cout<<setw(5)<<"A-"<<setw(5)<<"|"<<endl;
								   else
									   if(Datamhs.index[pra] >=80)
										   cout<<setw(5)<<"A"<<setw(5)<<"|"<<endl;
   }
   
   int main()
   {
	   int jumlah;
	   agus Datamhs;
	   cout<<endl;
	   cout<<"INPUT DATA MAHASISWA"<<endl;
	   cout<<"Masukkan jumlah Mahasiswa : "; cin>>jumlah;
	   cout<<endl;
	   for(tyo = 1; tyo <= jumlah; tyo++)
	   {
		   cout<<endl;
		   cout<<"Pengisian Data Mahasiswa ke-"<<tyo<<endl;
		   cout<<"NIM        : "; cin>>Datamhs.ag[tyo];
		   cout<<"NAMA       : "; cin>>Datamhs.us[tyo];
		   cout<<"Nilai Quiz : "; cin>>Datamhs.wah[tyo];
		   cout<<"Nilai UTS  : "; cin>>Datamhs.yu[tyo];
		   cout<<"Nilai UAS  : "; cin>>Datamhs.wahyu[tyo];
	   }
	   cout<<endl;
	   cout<<"Data yang dimasukkan adalah : "<<endl;
	   cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	   cout<<"|"<<setw(10)<<"NIM"<<setw(10)<<"|"<<setw(10)<<"NAMA"<<setw(10)<<"|"<<setw(5)<<"QUIS"<<setw(5)<<"|"<<setw(5)<<"UTS"<<setw(5);
	   cout<<"|"<<setw(5)<<"UAS"<<setw(5)<<"|"<<setw(10)<<"N A"<<setw(10)<<"|"<<setw(5)<<"INDEX"<<setw(5)<<"|"<<endl;
	   cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	   for(tyo = 1; tyo <= jumlah; tyo++)
	   {
		   for(pra = tyo; pra == tyo; pra++)
		   {
			   Datamhs.WP[pra] = (Datamhs.wah[pra] + Datamhs.yu[pra] + Datamhs.wahyu[pra])/3;
			   cout<<"|"<<setw(10)<<Datamhs.ag[pra]<<setw(10)<<"|"<<setw(10)<<Datamhs.us[pra]<<setw(10)<<"|";
			   cout<<setw(5)<<Datamhs.wah[pra]<<setw(5)<<"|"<<setw(5)<<Datamhs.yu[pra]<<setw(5)<<"|"<<setw(5);
			   cout<<Datamhs.wahyu[pra]<<setw(5)<<"|"<<setw(10)<<Datamhs.WP[pra]<<setw(10)<<"|";
			   Datamhs.index[pra] = Datamhs.WP[pra];
			   index(Datamhs);
		   }
	   }
	   cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
       cin.get();	   
   }
