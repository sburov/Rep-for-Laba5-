#include<stdio.h>
#include<math.h>
#include<conio.h>
#define n 5
void vvid(int element[n][n]);
void metod_vibory(int element[n][n]);
void suma(int element[n][n]);
void heometruchne(int element[n][n]);
void main()
{
    int element[n][n];
    vvid(element);
    metod_vibory(element);
    suma(element);
    heometruchne(element);
}
void vvid(int element[n][n])
{
    int i, j, k, f, pos;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("element[%d][%d] =", i + 1, j + 1);
            scanf_s("%d", &element[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("   %i\t", element[i][j]);
        printf("\n");
    }
 
}

void metod_vibory(int element[n][n])
{
    int i, j, pos, p, f;
    for (j = 0; j < n; j++)
        for (i = 0; i < n - 1; i++)
        {
            int pos = i;
            for (p = i + 1; p < n - 1; p++)
                if (element[pos][j] > element[p][j])
                { 

                    pos = p;
                    f = element[pos][j];
                    element[pos][j] = element[i][j];
                    element[i][j] = f;
                }
        }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%i\t", element[i][j]);
        printf("\n");
    }

}
void suma(int element[n][n])
{
    int i, j;
    double suma;

    suma = 0;
    for (i = 0; i < n; i++)
    {
        {
            for (j = 0; j < n; j++)
                suma = suma + element[i][j];
        }
        printf("   suma elemetiv = %lf", suma);
        printf("\n");
        suma = 0;
    }
 
}

void heometruchne(int element[n][n])
{
    int i = 1, j;
    double dobutok, serheom;
    dobutok = i; 
    {
        for (i = 0; i < n; i++);
        {
            {
                for (j = 0; j < n; j++)
                    dobutok = dobutok * element[i][j];
                serheom = pow(dobutok, (double)i / n);

            }
            printf(" seredne heometrichne znachennya = %lf", serheom);
            printf("\n");
            dobutok = i;
        }
    }
  
}