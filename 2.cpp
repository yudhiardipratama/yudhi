#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
//mendefinisikan struktur waktu
struct {
int jam;
int menit;
int detik;
} masuk, keluar, selisih;

int main()
{
//memasukkan data jam masuk
cout <<"Masukkan Waktu Pertama" <<endl;
cout <<"Jam   : "; cin >>masuk.jam;
cout <<"Menit : "; cin >>masuk.menit;
cout <<"Detik : "; cin >>masuk.detik;

//membuat jarak baris
cout <<endl <<endl;

//masukkan data jam keluar
cout <<"masukkan waktu ke dua" <<endl;
cout <<"Jam   : "; cin >>keluar.jam;
cout <<"Menit : "; cin >>keluar.menit;
cout <<"Detik : "; cin >>keluar.detik;

// 10:21:10
// 10:20:50 -
//menghitung selisih detik
if ((keluar.detik - masuk.detik) < 0) {
selisih.detik = (60 + keluar.detik) - masuk.detik;
keluar.menit;
}
else {
	selisih.detik = keluar.detik - masuk.detik;
}
//menghitung selisih menit
if ((keluar.menit - masuk.menit) < 0) {
selisih.menit= (60 + keluar.menit) - masuk.menit;
keluar.jam;
selisih.jam = keluar.jam - masuk.jam-1;
}
else {
selisih.menit = keluar.menit - masuk.menit;
selisih.jam = keluar.jam - masuk.jam;
}
//menghitung selisih jam


//membuat jarak baris
cout <<endl <<endl;

cout <<"selisih dalam detik = " << selisih.jam*3600 + selisih.menit*60 + selisih.detik <<endl;

cout <<"Selisih --------" <<endl;
cout <<" Jam   : " << selisih.jam <<endl;
cout <<" Menit : " << selisih.menit <<endl;
cout <<" Detik : " << selisih.detik <<endl;

getch ();
return 0;
}

