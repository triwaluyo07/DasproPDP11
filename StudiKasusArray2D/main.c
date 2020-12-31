#include <stdio.h>
#include <stdlib.h>

int main()
{
    int angka[5][5];
    angka[0][0] = 1;
    angka[0][1] = 2;
    angka[0][2] = 3;
    angka[0][3] = 4;
    angka[0][4] = 5;

    angka[1][0] = 6;
    angka[1][1] = 7;
    angka[1][2] = 8;
    angka[1][3] = 9;
    angka[1][4] = 1;

    angka[2][0] = 3;
    angka[2][1] = 5;
    angka[2][2] = 7;
    angka[2][3] = 9;
    angka[2][4] = 0;

    angka[3][0] = 2;
    angka[3][1] = 4;
    angka[3][2] = 6;
    angka[3][3] = 8;
    angka[3][4] = 1;

    angka[4][0] = 2;
    angka[4][1] = 3;
    angka[4][2] = 4;
    angka[4][3] = 5;
    angka[4][4] = 6;


    int angka2[5][5];
    angka2[0][0] = 2;
    angka2[0][1] = 1;
    angka2[0][2] = 3;
    angka2[0][3] = 6;
    angka2[0][4] = 8;

    angka2[1][0] = 7;
    angka2[1][1] = 3;
    angka2[1][2] = 9;
    angka2[1][3] = 0;
    angka2[1][4] = 2;

    angka2[2][0] = 2;
    angka2[2][1] = 5;
    angka2[2][2] = 4;
    angka2[2][3] = 6;
    angka2[2][4] = 1;

    angka2[3][0] = 4;
    angka2[3][1] = 2;
    angka2[3][2] = 9;
    angka2[3][3] = 3;
    angka2[3][4] = 5;

    angka2[4][0] = 2;
    angka2[4][1] = 5;
    angka2[4][2] = 0;
    angka2[4][3] = 1;
    angka2[4][4] = 3;

    int idx;
    int idx2;


    printf("Matriks A : \n");
    for(idx=0;idx<5;idx++)
    {
        for(idx2=0;idx2<5;idx2++)
        {
            printf("%d ",angka[idx][idx2]);
        }
    puts("");
    }
    printf(" \n");

    printf("Matriks B : \n");
    for(idx=0;idx<5;idx++)
    {
        for(idx2=0;idx2<5;idx2++)
        {
            printf("%d ",angka2[idx][idx2]);
        }
    puts("");
    }

    int cek=0;
    int i;
    int j;

    for(i=0;i<idx;i++)
    {
        for(j=0;j<idx2;j++)
        {
            if(angka[i][j]!=angka2[i][j])
            {
                cek=1;

            }
        }
    }

    if(cek==1)
    {
        printf("Matriks A dan Matrix B sama");
    }
    else
        {
        printf("Matriks A dan Matrix B tidak sama");
        }


    return 0;
}
