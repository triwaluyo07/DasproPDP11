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

    printf(" \n");

    int hasil_1;

    printf("dijumlahkan menjadi : \n");


    for(idx=0;idx<5;idx++)
    {
        for(idx2=0;idx2<5;idx2++)
        {
            printf("%d ",hasil_1=angka[idx][idx2]+ angka2[idx][idx2]);
        }
    puts("");
    }
    puts("\n");

    int hasil_2;

    printf("dikurangkan menjadi : \n");


    for(idx=0;idx<5;idx++)
    {
        for(idx2=0;idx2<5;idx2++)
        {
            printf("%d ",hasil_2= angka[idx][idx2]- angka2[idx][idx2]);
        }
    puts("");
    }
    puts("\n");


    int i;
    int j;
    int k;
    int hasil_3[5][5];

    printf("dikalikan menjadi: \n");


    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            hasil_3[i][j]=0;
            for(k=0;k<5;k++)
            {
                hasil_3[i][j]+=angka[i][k]*angka2[k][j];
            }
            printf ("%d ",hasil_3[i][j]);
        }
        puts("");
    }

    return 0;
}
