// Nama Lengkap : TEGAR AYANG P
// Kelas : 2IN
// Nama  File:T4Prg2


#include <stdio.h>
#define x 4
#define y 2
#define z 2


main()
{
int i,j,h;
int Nilai_Mhs[x][y][z];

for (i=0; i<x; i++)
 
 {
      printf("Masukkan Nilai Matematika Ke-%d = ",i);
      scanf("%d",&Nilai_Mhs[i][0][0]);
      printf("Masukkan Nilai Stastistik Ke-%d = ",i);
      scanf("%d",&Nilai_Mhs[i][1][0]);
      printf("Masukkan Nilai Stuk. data Ke-%d = ",i);
      scanf("%d",&Nilai_Mhs[i][0][1]);
      printf("Masukkan nilai Data base Ke-%d = ",i);
      scanf("%d",&Nilai_Mhs[i][1][1]);
      printf("\n");
	}
	
 printf("\n");
 printf("--------------------------------------\n");
 printf("No.\math\Stat\Stuk D\D base\n");
 printf("--------------------------------------\n");
 
 for (i=0; i<x; i++)
    {
      printf("%d\t%d\t%d\t%d\t%d\n",i+1,Nilai_Mhs[i][0][0],
      Nilai_Mhs[i][1][0],Nilai_Mhs[i][0][1],Nilai_Mhs[i][1][1]);
    }
 printf("---------------------------------------\n");
 }
