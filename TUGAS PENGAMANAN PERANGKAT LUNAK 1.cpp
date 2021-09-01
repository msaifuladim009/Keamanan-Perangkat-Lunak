
#include <iostream>

using namespace std;
int main (int argc,char const*argv[])
{
 
 char nama [100];
 int nilai, nilaiAkhir, P ,T,UT, UA;
 cout<<"//--------------------------------//\n";
 cout<<"Program Perhitungan Nilai Mahasiswa \n\n";
 cout<<"Masukan Nama Mahasiswa :  ";cin>>nama;
 cout<<"Masukan Nilai Kehadiran : ";cin>>P;
 cout<<"Masukan Nilai Tugas  : ";cin>>T;
 cout<<"Masukan Nilai UTS  : ";cin>>UT;
 cout<<"Masukan Nilai UAS  : ";cin>>UA;
 cout<<"//--------------------------------//\n";
 
 //Proses hitung nilai rata-rata
 //
 nilai = (P+T+UA+UT)/4;
 cout<<"//==========HASIL=========\\";
 cout<<"Nama Mahasiswa\t  : "<<nama<<endl;
 cout<<"Nilai Kehadiran\t : "<<P<<endl;
 cout<<"Nilai Tugas\t  : "<<T<<endl;
 cout<<"Nilai UTS\t  : "<<UT<<endl;
 cout<<"Nilai UAS\t  : "<<UA<<endl;
 //
 if (nilai >= 100) {
  //Hasil Perhitungan
  cout<<"Skor  \t : A \n";
 } else if ((nilai>=85) && (nilai < 100)) {
 	
  cout<<"Skor  \t : A- \n";
 } else if ((nilai>=80) && (nilai < 85)) {
 	
  cout<<"Skor  \t : B+ \n";
 } else if ((nilai>=75) && (nilai < 80)) {
 	
  cout<<"Skor  \t : B \n";
 } else if ((nilai>=70) && (nilai < 75)) {
 	
  cout<<"Skor  \t : B- \n";
 } else if ((nilai>=65) && (nilai < 70)) {
 	
  cout<<"Skor  \t : C+ \n";
 } else if ((nilai>=60) && (nilai < 65)) {
 	
  cout<<"Skor  \t : C \n";
 } else if ((nilai>=55) && (nilai < 60)) {
 	
   cout<<"Skor  \t : D \n";
 } else if ((nilai>=40) && (nilai < 55)) {
 	
  cout<<"Skor  \t : E \n";
}
 	
 
 
 cout<<"//--------------------------------//\n";
 //Keluar dari Proses
 cin.get();
 return 0;
}

