// Nama Lengkap : Tegar ayang p
// Kelas : 2IN
// Nama File:T3Prg4
#include <stdio.h>
#define baris 4
#define kolom 2
main()
{
int i,j;
int Nilai_Mhs[baris][kolom];
printf("\t--------------------------------------------------------------------\n");
printf("\tMemasukkan dan Mengeluarkan Nilai Matematika dan Stitistik\n");
printf("\tSebanyak 4 Mahasiswa.\n");
printf("\t--------------------------------------------------------------------\n");
for(i=0;i<4;i++)
{
printf("\tMasukkan nilai matematika ke-%d: ",i+1);
scanf("%d",&Nilai_Mhs[i][0]);
printf("\tMasukkan nilai statistik ke-%d: ",i+1);
scanf("%d",&Nilai_Mhs[i][1]);
printf("\n");

}
printf("\n\n\t--------------------------------------------------------------------\n");
printf("\n\tMatematika	 statistik");
printf("\n\t-----------------------------");
for(i=0;i<4;i++)
{
printf("\n\t%d \t\t %d",Nilai_Mhs[i][0],Nilai_Mhs[i][1]);
}
printf("\n\t----------------------------");
}
