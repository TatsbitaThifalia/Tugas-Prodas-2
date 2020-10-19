//*Nama: Tatsbita Thifalia
//* NIM: 20051397027
//* Prodi/Kelas: D4 Manajemen Informatika/2020 A
//*Mata Kuliah:Praktikum Pemrograman Dasar
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int main()
{
   string nama[10];
   int jum,gol[10],jkerja[10],jlembur[10];
   int gapok[10],glembur[10],gajibersih[10];
   
   cout<< "   ========================= PERIKSA UPAH ANDA DISINI =========================    " <<endl;
   cout<<" ================================================================================== "<<endl;
   cout<<"Masukan Jumlah Karyawan yang ingin diperiksa  : ";
   cin>>jum;
   cout<<endl;
	
   for (int i=1;i<=jum;i++){
    cout<<"Karyawan ke-"<<i<<endl;
	cout<<"Karyawan atas nama              : ";
	cin>>nama[i];
	cout<<"Masukan Golongan                : ";
	cin>>gol[i];
	cout<<"Masukan Jumlah Jam Kerja        : ";
	cin>>jkerja[i];
	
	switch (gol[i]){
		case 1 : 
			gapok[i]=5000 *48;
			break;
		case 2 :
			gapok[i]=7000 *48;
			break;
		case 3 :
			gapok[i]=8000 *48;
			break;
		case 4 :
			gapok[i]=10000 *48;
			break;
		default :
			gapok[i]=0;	
	}
	
	if (jkerja[i]>48){
	    jlembur[i]=jkerja[i]-48;	
	}else{
	     jlembur[i]=0;
	}
	
	glembur[i]=jlembur[i]*4000;
	gajibersih[i]=(gapok[i]+glembur[i]);
	cout<<endl;
	}
	
	cout<<endl;
	cout<<endl;
	cout<<"     ============================= GAJI KARYAWAN =============================     "<<endl;
    cout<<" ================================================================================= "<<endl;
		cout<<endl;
	for (int i=1;i<=jum;i++){
		cout<<"Nama                 : "<<nama[i]<<endl;
		cout<<"Gaji Pokok           : "<<gapok[i]<<endl;		
		cout<<"Gaji Lembur          : "<<glembur[i]<<endl;
		cout<<"Gaji Diterima        : "<<gajibersih[i]<<endl;
		cout<<endl<<endl;	
	}	

getch();
}
