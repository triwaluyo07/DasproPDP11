#include <stdio.h>
#include <stdlib.h>

int main()
{
    int angka[5][5];
    angka[0][0] = 2;
    angka[0][1] = 4;
    angka[0][2] = 7;
    angka[0][3] = 7;
    angka[0][4] = 1;

    angka[1][0] = 8;
    angka[1][1] = 9;
    angka[1][2] = 1;
    angka[1][3] = 8;
    angka[1][4] = 2;

    angka[2][0] = 5;
    angka[2][1] = 3;
    angka[2][2] = 6;
    angka[2][3] = 3;
    angka[2][4] = 1;

    angka[3][0] = 7;
    angka[3][1] = 8;
    angka[3][2] = 1;
    angka[3][3] = 0;
    angka[3][4] = 5;

    angka[4][0] = 2;
    angka[4][1] = 1;
    angka[4][2] = 3;
    angka[4][3] = 4;
    angka[4][4] = 9;

    int idx;
    int idx2;
    int jumlah;
    int i,j;
    int Jumbar;
    int Jumkol;


    printf("Matriks  : \n");
    for(idx=0;idx<5;idx++)
    {
        for(idx2=0;idx2<5;idx2++)
        {
            printf("%d ",angka[idx][idx2]);
        }
    puts("");
    }
    printf(" \n");



   ///00 01 02 03 04
   ///10 11 12 13 14
   ///20 21 22 23 24
   ///30 31 32 33 34
   ///40 41 42 43 44

    for(idx=0;idx<5;idx++)
    {
        for(idx2=0;idx2<5;idx2++)
        {
            jumlah = angka[0][0]+angka[1][1]+angka[2][2]+angka[3][3]+angka[4][4];
        }
    }

    printf("jumlah dari baris yg miring nya adalah : %d \n",jumlah);
    puts("\n");


    printf("\n");

    for(i=0,j=1;i<5,j<6;i++,j++)
    {
        Jumbar=angka[i][0]+angka[i][1]+angka[i][2]+angka[i][3]+angka[i][4];
        printf("Jumlah Baris ke%d adalah %d \n",j,Jumbar);
    }

    for(i=0,j=1;i<5,j<6;i++,j++)
    {
        Jumkol=angka[0][i]+angka[1][i]+angka[2][i]+angka[3][i]+angka[4][i];
        printf("Jumlah Kolom ke%d adalah %d \n",j,Jumkol);
    }


    return 0;
}
