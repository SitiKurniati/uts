#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <iomanip>
using namespace std;
/**
*bundet.com
*C++ Menghitung Nilai Mahasiswa - Variasi 4
*/

main()
{
	char nama [100][100], grade [100];
	float nilai [100];
	float Kehadiran [100], Etika [100], Tugas [100], UTS [100], UAS [100], NIM [100] ;
	float rata [100];
	float no;
	
	cout<<"PERHITUNGAN NILAI MAHASISWA"<<endl;
	cout<<"STMIK INSAN PEMBANGUNAN TELUKNAGA"<<endl;
	cout<<"Masukkan Jumlah Mahasiswa: ";
	cin>>no;
	
	//input data
	for(int i=1;i<=no;i++){
		cout<<"Mahasiswa Ke - "<<i<<endl;
		cout<<"Masukkan Nama : ";
		cin>>nama[i];
		cout<<"Masukkan NIM : ";
		cin>>NIM[i];
		cout<<"Masukkan Nilai Kehadiran : ";
		cin>>Kehadiran[i];
		cout<<"Masukkan Nilai Etika : ";
		cin>>Etika[i];
		cout<<"Masukkan Nilai Tugas : ";
		cin>>Tugas[i];
		cout<<"Masukkan Nilai UTS : ";
		cin>>UTS[i];
		cout<<"Masukkan Nilai UAS : ";
		cin>>UAS[i];

	
rata[i]=(Kehadiran[i]*0.15)+(Etika[i]*0.1)+(Tugas[i]*0.2)+(UTS[i]*0.25)+(UAS[i]*0.3);

if(rata[i]>=80)
grade[i]='A';
else if(rata[i]>=70&&rata[i]<80)
grade[i]='B';
else if(rata[i]>=59&&rata[i]<70)
grade[i]='C';
else if(rata[i]>=50&&rata[i]<59)
grade[i]='D';
else
grade[i]='E';
cout<<endl;
}

cout<<" DAFTAR NILAI "<<endl;
cout<<" MATERI : PEMROGRAMAN C++ "<<endl;
cout<<"--------------------------------------------------------- "<<endl;
cout<<"No.  Nama                     Nilai "<<endl;
cout<<"     Mahasiswa     -----------------------------    Grade "<<endl;
cout<<"                   NIM  Kehadiran  Etika  Tugas   UTS     UAS     Rata2    Grade "<<endl;
cout<<"--------------------------------------------------------- "<<endl;

for(int i=1;i<=no;i++)
{
cout<<setiosflags(ios::left)<<setw(5)<<i;
cout<<setiosflags(ios::left)<<setw(14)<<nama[i];
cout<<setiosflags(ios::left)<<setw(8)<<NIM[i];
cout<<setiosflags(ios::left)<<setw(8)<<Kehadiran[i];
cout<<setiosflags(ios::left)<<setw(8)<<Etika[i];
cout<<setiosflags(ios::left)<<setw(8)<<Tugas[i];
cout<<setiosflags(ios::left)<<setw(8)<<UTS[i];
cout<<setiosflags(ios::left)<<setw(8)<<UAS[i];
cout<<setiosflags(ios::left)<<setw(10)<<rata[i];
cout<<setiosflags(ios::left)<<setw(8)<<grade[i]<<endl;
}
cout<<"--------------------------------------------------------- "<<endl;
getch();	
	


}
