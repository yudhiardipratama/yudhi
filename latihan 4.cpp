#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
int main () {
	int huruf;
	
	cout<<"Masukkan huruf kecil : ";
	cin>>huruf;
	cout<<endl;
	//seleksi pembanding OR, salah satu kondisi bernilai benar
	if ((huruf == "a") || (huruf == "i") || (huruf == "o")) {
	 cout<<"Anda memasukkan huruf vokal";
	} else {
		cout<<"Yang anda masukkan adalah huruf konsonan";
	}
}
