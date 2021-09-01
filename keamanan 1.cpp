#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
char nama[30],matkul[30], grade;
int kehadiran, tugas, uts, uas, ntugas, nuts, nuas, NA, nkehadiran;
cout<<endl<<endl;
cout<<"------------------ PROGRAM MENGHITUNG NILAI AKHIR ------------------"<<endl<<endl;
cout<<"Nama Mata Kuliah : "; gets (matkul);
cout<<"Masukkan Nama Siswa : "; gets(nama);
cout<<"Masukkan Nilai Tugas : "; cin>>tugas;
cout<<"Masukkan Nilai uts : "; cin>>uts;
cout<<"Masukkan Nilai uas : "; cin>>uas;
cout<<"Masukkan Kehadiran : "; cin>>kehadiran;
nkehadiran = kehadiran*10/100;
ntugas = tugas*20/100;
nuts = uts*30/100;
nuas = uas*40/100;
NA = nkehadiran+ntugas+nuts+nuas;
if(NA>=85)
{ grade = 'A';}

else if (NA>=80)
{
grade = 'A-';
}

else if (NA>=75)
{
grade = 'B+';
}

else if (NA>=70)
{
grade = 'B';
}

else if (NA>=65)
{
grade = 'B-';
}

else if (NA>=60)
{
grade = 'C+';
}

else if (NA>=55)
{
grade = 'C';
}

else if (NA>=40)
{
grade = 'D';
}

else if (NA>=0)
{
grade = 'E';
}

system("cls");
cout<<endl<<endl;
cout<<"------------------ Hasil Nilai Akhir Siswa --------------------"<<endl<<endl;
cout<<"Nama Mata Kuliah "<<matkul<<","<<endl;
cout<<"siswa yang bernama "<<nama<<" dengan nilai persentasi yang dihasilkan : "<<endl;
cout<<"Kehadiran * 10% = "<<nkehadiran<<endl;
cout<<"Nilai tugas * 20% = "<<ntugas<<endl;
cout<<"Nilai UTS * 30% = "<<nuts<<endl;
cout<<"Nilai UAS * 40% = "<<nuas<<endl;
cout<<endl<<endl;
cout<<"Jadi siswa yang bernama "<<nama<<" memperoleh nilai akhir sebesar "<<NA<<endl<<endl;
cout<<"Grade nilai yang didapat adalah "<<grade<<endl;
}
