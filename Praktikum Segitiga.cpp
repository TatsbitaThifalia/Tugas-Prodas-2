//*Nama: Tatsbita Thifalia
//* NIM: 20051397027
//* Prodi/Kelas: D4 Manajemen Informatika/2020 A
//*Mata Kuliah:Praktikum Pemrograman Dasar
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int code,A,B,C1;
	float L,C,Kel;
	
	 cout<< " Alas Segitiga = " ;cin >> A;
     cout<< " Tinggi Segitiga = " ;cin >> B;
     cout<<endl;
     cout<<" Mencari panjang sisi miring (1) \n " <<endl;
	 cout<<" Mencari luas                (2) \n " <<endl;
	 cout<<" Mencari Keliling            (3) \n " <<endl;
	 cout<<" Keluar program              (4) \n " <<endl;
	 cout<<endl;
	 cout<<" Kode Pencarian: \n" <<endl;
	 cin>> code;
	 switch (code)
	 {
		case 1 : 
			C1 =  A*A + B*B;
			C  =  sqrt (C1);
			cout << " Panjang Sisi Miring = " <<C ;
			break;
		case 2 :
			L = float (A*B)/2 ;
			cout << " Luas Segitiga = " <<L ;
			break;
		case 3 :
			C1 =  A*A + B*B;
			C  =  sqrt (C1);
			Kel = A + B + C ;
			cout << " Keliling Segitiga = " << Kel;
			break;
		}
		
    return 0 ;
}
