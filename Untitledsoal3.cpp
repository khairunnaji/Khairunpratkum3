#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main () {
	int Gp,Jk,Lembur,Gt,Pajak;
		cout << "Masukkan gaji pegawai : ";
	cin >> Gp;
	cout << "Masukkan jam kerja    : ";
	cin >> Jk;
	
	Lembur= Jk - 40;
	Gt = (Lembur*1.5+40)+Gp;
	Pajak=Gt*0.15;
	Gt=Gt-Pajak;
	
	cout<<"Gaji bersih pegawai : "<< Gt<<endl;	
		
}

